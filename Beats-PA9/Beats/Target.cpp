#include "Target.h"

Target::Target()
{
	this->setRadius(35.f);
	this->setOutlineThickness(5.f);
	this->setFillColor(sf::Color::Transparent);
	this->setOutlineColor(sf::Color::White);
	this->setPosition(sf::Vector2f(170, 315));
}