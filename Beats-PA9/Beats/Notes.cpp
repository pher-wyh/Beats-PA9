#include "Notes.h"

Notes::Notes(const sf::Color &color)
{
	this->setRadius(30.f);
	this->setFillColor(color);
	this->setOutlineColor(sf::Color::White);
	this->setOutlineThickness(6.5f);
	this->setPosition(sf::Vector2f(1955, 350));
	this->setOrigin(sf::Vector2f(30, 30));
}

Notes & Notes::operator=(const Notes &rhs)
{
	if (this != &rhs) // check self assigning
	{
		setRadius(rhs.getRadius());
		setFillColor(rhs.getFillColor());
		setOutlineColor(rhs.getOutlineColor());
		setOutlineThickness(rhs.getOutlineThickness());
		setPosition(rhs.getPosition());
	}

	return *this;
}