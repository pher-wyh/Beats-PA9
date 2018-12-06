#include "Bar.h"

Bar::Bar()
{
	this->setSize(sf::Vector2f(1920, 200));
	this->setPosition(sf::Vector2f(0 , 250));
	this->setOutlineThickness(5);
	this->setOutlineColor(sf::Color(204,255,255));
	//this->setFillColor(sf::Color(204, 204, 255));
	this->setFillColor(sf::Color(204,204,255));
}