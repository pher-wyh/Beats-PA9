#include "GamePlay.h"


// notes position = (x, 350)

GamePlay::GamePlay(const string &songfile, const string &sheetfile, const int &newSpeed)
{
	speed = newSpeed;
	notes = new Queue;
	currentNotes = new Queue;
	missedNotes = new Queue;
	song.openFromFile(songfile);
	totalNotes = 0;
	readNotes(sheetfile);
	i = 0;
	counter = 10;
	comboNum = 0;
	totalHit = 0;
	totalScore = 0;
	
	// how to play a song automatically?
	song.play();
}

GamePlay::~GamePlay()
{
	delete notes;
	delete currentNotes;
	delete missedNotes;
}



void GamePlay::run(sf::RenderWindow &window)
{
	while (song.getStatus() != sf::SoundSource::Status::Stopped)
	{
		window.clear();

		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
			{
				song.stop();
				window.close();
			}
			if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::F || event.key.code == sf::Keyboard::J)
				{
					bass.play();

					// check if it's red and inside the target when hitting
					checkHit(sf::Color::Red);

				}
				else if (event.key.code == sf::Keyboard::E || event.key.code == sf::Keyboard::I)
				{
					snare.play();

					// check if it's blue and inside the target when hitting
					checkHit(sf::Color::Cyan);
				}
				else if (event.key.code == sf::Keyboard::Space) // fast replay
				{
					replay();
				}
				else if (event.key.code == sf::Keyboard::Escape)
				{
					song.stop();
				}
			}
		}

		drawDefault(window);

		// load the queue of all notes into current queue for moving and displaying
		loadCurrent();

		// keep the notes moving
		moveNotes(window, currentNotes);

		// check if the notes passde through target and add it to the queue
		checkMissed();
		moveNotes(window, missedNotes);

		window.display();
	}

	// show the result
	showResult(window);
}

Queue * GamePlay::getNotes() const
{
	return notes;
}

void GamePlay::readNotes(const string &sheetfile)
{
	ifstream inFile;
	inFile.open(sheetfile);
	char tempChar = '\0';
	Notes tempRed(sf::Color::Red);
	Notes tempBlue(sf::Color::Cyan);
	Notes tempTrans(sf::Color::Transparent);
	while (!inFile.eof())
	{
		inFile.get(tempChar);
		switch (tempChar)
		{
		case '_': // spacing
			notes->enqueue(tempTrans);
			break;
		case '1':
			notes->enqueue(tempRed);
			totalNotes++;
			break;
		case '2':
			notes->enqueue(tempBlue);
			totalNotes++;
			break;
		default:
			break;
		}
	}

	inFile.close();
}

void GamePlay::drawDefault(sf::RenderWindow &window)
{
	window.draw(background);
	window.draw(bar);
	window.draw(target);
	showScore(window); // display score
	drawCombo(window); // display combo
	if (counter < 10)
	{
		window.draw(good);
		window.draw(hit);
		counter++;
	}
}

void GamePlay::loadCurrent()
{
	if (i < notes->getSheet()->size() && (notes->getSheet()->begin() + i)->getFillColor() != sf::Color::Transparent)
	{
		currentNotes->enqueue(*(notes->getSheet()->begin() + i));
	}
	i++;
}

void GamePlay::moveNotes(sf::RenderWindow &window, Queue *queue)
{
	for (int j = queue->getSheet()->size() - 1; j >= 0; j--)
	{
		window.draw(*(queue->getSheet()->begin() + j));
		(queue->getSheet()->begin() + j)->move(-speed, 0);
	}
}

void GamePlay::checkHit(const sf::Color &color)
{
	if (!currentNotes->getSheet()->empty())
	{
		if (currentNotes->getSheet()->begin()->getFillColor() == color &&
			target.getGlobalBounds().contains(currentNotes->getSheet()->begin()->getPosition()))
		{
			// hit correctly
			currentNotes->dequeue();
			//cout << "hit!" << endl;
			counter = 0;
			comboNum++;
			totalHit++;
		}
	}
}

void GamePlay::checkMissed()
{
	if (!currentNotes->getSheet()->empty())
	{
		if (currentNotes->getSheet()->begin()->getPosition().x < 160)
		{
			missedNotes->enqueue(currentNotes->dequeue());
			comboNum = 0;
		}
	}
}

void GamePlay::drawCombo(sf::RenderWindow &window)
{
	if (comboNum > 1)
	{
		combo.setString(std::to_string(comboNum) + "\nCombo!");
		window.draw(combo);
	}
}

void GamePlay::replay()
{
	song.play();
	currentNotes->getSheet()->clear();
	missedNotes->getSheet()->clear();
	comboNum = 0;
	totalHit = 0;
	totalScore = 0;
	i = 0;
}

void GamePlay::showResult(sf::RenderWindow &window)
{
	if (totalHit > ((totalNotes / 4) * 3)) // >75% = pass
	{
		result.setString("Success!");
	}
	else
	{
		result.setString("Failed!");
	}

	// prints out result for few seconds
	for (int j = 0; j < 70; j++)
	{
		window.draw(result);
		window.display();
	}
}

void GamePlay::showScore(sf::RenderWindow &window)
{
	totalScore = totalHit * 1020;
	score.setString("Score: " + std::to_string(totalScore));
	window.draw(score);
}