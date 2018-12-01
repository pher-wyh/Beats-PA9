#include "Notes.h"

Notes::Notes(const sf::Color &color)
{
	this->setRadius(30.f);
	this->setFillColor(color);
	this->setOutlineColor(sf::Color::White);
	this->setOutlineThickness(7.5f);
}