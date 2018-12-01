#include <SFML\Graphics.hpp>
#include "Notes.h"
#include "Target.h"
#include "Bar.h"
#include "GamePlay.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Beats");
	Notes red(sf::Color::Red);
	Notes blue(sf::Color::Cyan);
	blue.setPosition(sf::Vector2f(200, 320));
	red.setPosition(sf::Vector2f(250, 320));
	Bar bar;
	Target target;
	target.setPosition(sf::Vector2f(170, 315));

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		/*	if (event.type == sf::Event::KeyPressed)
			{
				if (event.key.code == sf::Keyboard::F)
				{
					GamePlay gameplay;
					gameplay.run(window);
				}
			}*/
		}

		window.clear(sf::Color::White);
		window.draw(bar);
		window.draw(target);
		window.draw(red);
		window.draw(blue);
		window.display();

	}

	return 0;
}