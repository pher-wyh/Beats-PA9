#include "GamePlay.h"

// notes position = (x, 320)

GamePlay::GamePlay(const string &songfile, const string &sheetfile)
{
	notes = new Queue;
	song.openFromFile(songfile);
	readNotes(sheetfile);

	// how to play a song automatically?
	//song.play();
}

GamePlay::~GamePlay()
{
	delete notes;
}

void GamePlay::readNotes(const string &sheetfile)
{
	ifstream inFile;
	inFile.open(sheetfile);
	char tempChar = '\0';
	Notes tempRed(sf::Color::Red);
	Notes tempBlue(sf::Color::Blue);
	Notes tempTrans(sf::Color::Transparent);
	while (!inFile.eof())
	{
		inFile.get(tempChar);
		switch (tempChar)
		{
		case '0': // spacing
			notes->enqueue(tempTrans);
			break;
		case '1':
			notes->enqueue(tempRed);
			break;
		case '2':
			notes->enqueue(tempBlue);
			break;
		default:
			break;
		}
	}

	inFile.close();
}

void GamePlay::run(sf::RenderWindow &window)
{
	
	sf::Texture texture;
	
	sf::Vector2f stop(0, 320);
	

	sf::Event event;
	while (window.pollEvent(event))
	{
		
		if (event.type == sf::Event::Closed)
			window.close();
		if (event.type == sf::Event::KeyPressed)
		{
			if (event.key.code == sf::Keyboard::F || event.key.code == sf::Keyboard::J)
			{
				bass.play();
			}

			if (event.key.code == sf::Keyboard::E || event.key.code == sf::Keyboard::I)
			{
				snare.play();
			}

			if (event.key.code == sf::Keyboard::Space)
			{
				song.play();
			}
		}
	}

	
	if (texture.loadFromFile("bg.png")) // set background image
	{
		sf::Sprite background(texture);
		window.draw(background);
	}

	window.draw(bar);
	window.draw(target);
	//int i = 0;
	//if (i < notes->getSize())
	//{
	//	
	//	// how to keep every notes moving?
	//	//i++;
	//}
	
	window.draw(*(notes->getSheet()->begin()));
	(notes->getSheet()->begin())->move(-40,0);

	window.display();
	
}

Queue * GamePlay::getNotes() const
{
	return notes;
}