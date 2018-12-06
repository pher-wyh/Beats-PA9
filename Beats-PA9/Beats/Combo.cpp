#include "Combo.h"

Combo::Combo()
{
	if (font.loadFromFile("TrashHand.ttf"))
	{
		setFont(font);
		setPosition(sf::Vector2f(170, 500));
		setCharacterSize(120);
		setFillColor(sf::Color::White);
		setOutlineColor(sf::Color::Black);
		setOutlineThickness(5.f);
	}
}