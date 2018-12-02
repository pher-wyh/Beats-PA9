#include "Notes.h"

Notes::Notes(const sf::Color &color)
{
	this->setRadius(30.f);
	this->setFillColor(color);
	this->setOutlineColor(sf::Color::White);
	this->setOutlineThickness(7.5f);
	this->setPosition(sf::Vector2f(1925, 320));
}

Notes & Notes::operator=(const Notes &rhs)
{
	if (this == &rhs) // check self assigning
	{
		setRadius(rhs.getRadius());
		setFillColor(rhs.getFillColor());
		setOutlineColor(rhs.getOutlineColor());
		setOutlineThickness(rhs.getOutlineThickness());
		setPosition(rhs.getPosition());
	}

	return *this;
}