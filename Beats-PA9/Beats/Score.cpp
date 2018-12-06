#include "Score.h"

Score::Score()
{
	if (font.loadFromFile("TrashHand.ttf"))
	{
		setFont(font);
		setCharacterSize(120);
		setPosition(sf::Vector2f(1350, 600));
		setFillColor(sf::Color::White);
		setOutlineThickness(5);
		setOutlineColor(sf::Color::Black);
	}
}