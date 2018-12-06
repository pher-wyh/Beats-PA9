#include "Menu.h"

void Menu::run(sf::RenderWindow &window, BGM &bgm, MenuBG &bg)
{
	window.clear();

	sf::Event event;
	while (window.pollEvent(event))
	{
		if (event.type == sf::Event::Closed)
		{
			bgm.stop();
			window.close();
		}
		if (play.getGlobalBounds().contains(mouse.getPosition(window).x, mouse.getPosition(window).y))
		{
			if (event.type == sf::Event::MouseButtonPressed)
			{
			//	play.setColor(sf::Color(153, 255, 255));
			}
			else if (event.type == sf::Event::MouseButtonReleased)
			{
				songSelection.run(window, bgm, bg);
			}
		}
		else if (howToPlay.getGlobalBounds().contains(mouse.getPosition(window).x, mouse.getPosition(window).y))
		{
			if (event.type == sf::Event::MouseButtonPressed)
			{
				//howToPlay.setColor(sf::Color(153, 255, 255));
			}
			else if (event.type == sf::Event::MouseButtonReleased)
			{
				//howToPlay.setColor(sf::Color(204, 204, 255));
				instruction.run(window);
			}
			
		}
	}
	window.draw(bg);
	drawDefault(window);

	window.display();
}

void Menu::drawDefault(sf::RenderWindow &window)
{
	window.draw(title);
	window.draw(play);
	window.draw(howToPlay);
}