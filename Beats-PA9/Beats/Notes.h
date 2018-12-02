#pragma once
#include <SFML\Graphics.hpp>

// a class for creating each note by passing in red or blue

class Notes : public sf::CircleShape
{
public:
	Notes(const sf::Color &type);
	Notes & operator=(const Notes &rhs);
};