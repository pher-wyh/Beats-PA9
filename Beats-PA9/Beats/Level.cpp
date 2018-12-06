#include "Level.h"


void Level::run(sf::RenderWindow &window, const string &songname, const int &speed, BGM &bgm, MenuBG &bg)
{
	bool open = true;
	sf::Mouse mouse;
	sf::Event event;

	while (open)
	{
		window.clear(); // change to song selection screen

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (easy.getGlobalBounds().contains(mouse.getPosition(window).x, mouse.getPosition(window).y))
			{
				if (event.type == sf::Event::MouseButtonPressed)
				{
					//easy.setColor(sf::Color(153, 255, 255));
				}
				else if (event.type == sf::Event::MouseButtonReleased)
				{
					//easy.setColor(sf::Color(204, 204, 255));
					open = false;
					bgm.pause();
					GamePlay song1(songname + ".ogg", songname + "E.txt", speed);
					song1.run(window);
					bgm.play();
				}
			}
			else if (normal.getGlobalBounds().contains(mouse.getPosition(window).x, mouse.getPosition(window).y))
			{
				if (event.type == sf::Event::MouseButtonPressed)
				{
					//normal.setColor(sf::Color(153, 255, 255));
				}
				else if (event.type == sf::Event::MouseButtonReleased)
				{
					//normal.setColor(sf::Color(204, 204, 255));
					open = false;
					bgm.pause();
					GamePlay song2(songname + ".ogg", songname + "N.txt", speed);
					song2.run(window);
					bgm.play();
				}
			}
			else if (hard.getGlobalBounds().contains(mouse.getPosition(window).x, mouse.getPosition(window).y))
			{
				if (event.type == sf::Event::MouseButtonPressed)
				{
					//hard.setColor(sf::Color(153, 255, 255));
				}
				else if (event.type == sf::Event::MouseButtonReleased)
				{
					//hard.setColor(sf::Color(204, 204, 255));
					open = false;
					bgm.pause();
					GamePlay song3(songname + ".ogg", songname + "H.txt", speed);
					song3.run(window);
					bgm.play();
				}
			}
			else if (exit.getGlobalBounds().contains(mouse.getPosition(window).x, mouse.getPosition(window).y))
			{
				if (event.type == sf::Event::MouseButtonPressed)
				{
					//exit.setColor(sf::Color(153, 255, 255));
				}
				else if (event.type == sf::Event::MouseButtonReleased)
				{
					//exit.setColor(sf::Color(204, 204, 255));
					open = false;
				}
			}
		}

	window.draw(bg);
	window.draw(easy);
	window.draw(normal);
	window.draw(hard);
	window.draw(exit);
	window.display();
	}
	
}