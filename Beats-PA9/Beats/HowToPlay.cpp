#include "HowToPlay.h"

HowToPlay::HowToPlay()
{
	if (texture.loadFromFile("HowToPlay.png"))
	{
		info.setTexture(texture);
	}
}

void HowToPlay::run(sf::RenderWindow &window)
{
	sf::Event event;
	sf::Mouse mouse;
	bool open = true;
	while (open)
	{
		window.clear();

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
				if (event.type == sf::Event::MouseButtonReleased)
				{
					//exit.setColor(sf::Color(204, 204, 255));
					open = false;
				}
			}
		}

		window.draw(info);
		window.draw(exit);
		window.display();
	}
}