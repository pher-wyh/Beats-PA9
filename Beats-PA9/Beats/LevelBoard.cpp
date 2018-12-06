#include "LevelBoard.h"

LevelBoard::LevelBoard()
{
	setSize(sf::Vector2f(600, 800));
	setFillColor(sf::Color(204, 255, 255));
	setOutlineThickness(10);
	setOutlineColor(sf::Color::White);
	setPosition(sf::Vector2f(600, 100));
}