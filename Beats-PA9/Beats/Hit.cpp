#include "Hit.h"

Hit::Hit()
{
	if (font.loadFromFile("TrashHand.ttf"))
	{
		setString("Hit!");
		setFont(font);
		setCharacterSize(100);
		setPosition(sf::Vector2f(140, 100));
		setCharacterSize(120);
		setFillColor(sf::Color::White);
		setOutlineColor(sf::Color::Black);
		setOutlineThickness(5.f);
	}
}