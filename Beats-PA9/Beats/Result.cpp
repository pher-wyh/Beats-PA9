#include "Result.h"

Result::Result()
{
	if (font.loadFromFile("Yellowtail.otf"))
	{
		setFont(font);
		setCharacterSize(150);
		setFillColor(sf::Color(153, 255, 255));
		//setFillColor(sf::Color(204, 204, 255));
		setPosition(sf::Vector2f(500, 250));
	}
}