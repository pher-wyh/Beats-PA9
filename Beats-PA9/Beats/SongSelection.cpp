#include "SongSelection.h"

void SongSelection::run(sf::RenderWindow &window, BGM &bgm, MenuBG &bg)
{
	sf::Event event;
	sf::Mouse mouse;
	bool open = true;

	while (open)
	{
		window.clear(); // change to song selection screen

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
			if (exit.getGlobalBounds().contains(mouse.getPosition(window).x, mouse.getPosition(window).y))
			{
				if (event.type == sf::Event::MouseButtonPressed)
				{
					//exit.setColor(sf::Color(153, 255, 255));
				}
				else if (event.type == sf::Event::MouseButtonReleased)
				{
				//	exit.setColor(sf::Color(204, 204, 255));
					open = false;
				}
			}
			else if (song1Button.getGlobalBounds().contains(mouse.getPosition(window).x, mouse.getPosition(window).y))
			{
			//	song1.play();
				if (event.type == sf::Event::MouseButtonPressed)
				{
				//	song1Button.setColor(sf::Color(153, 255, 255));
				}
				else if (event.type == sf::Event::MouseButtonReleased)
				{
					//song1Button.setColor(sf::Color(204, 204, 255));
					level.run(window, "Fade", 10, bgm, bg);
					
				}
			}
			else if (song2Button.getGlobalBounds().contains(mouse.getPosition(window).x, mouse.getPosition(window).y))
			{
				//	song1.play();
				if (event.type == sf::Event::MouseButtonPressed)
				{
					//song2Button.setColor(sf::Color(153, 255, 255));
				}
				else if (event.type == sf::Event::MouseButtonReleased)
				{
				//	song2Button.setColor(sf::Color(204, 204, 255));
					level.run(window, "DifferentHeaven", 13, bgm, bg);
				}
			}
			else if (song3Button.getGlobalBounds().contains(mouse.getPosition(window).x, mouse.getPosition(window).y))
			{
				//	song1.play();
				if (event.type == sf::Event::MouseButtonPressed)
				{
				//	song3Button.setColor(sf::Color(153, 255, 255));
				}
				else if (event.type == sf::Event::MouseButtonReleased)
				{
					//song3Button.setColor(sf::Color(204, 204, 255));
					level.run(window, "Legendary", 10, bgm, bg);
				}
			}
		}
		
		window.draw(bg);
		window.draw(song1Button);
		window.draw(song2Button);
		window.draw(song3Button);
		window.draw(exit);
		window.display();
	}
}