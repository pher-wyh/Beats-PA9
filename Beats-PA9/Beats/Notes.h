#pragma once
#include <SFML\Graphics.hpp>
#include <string>
using std::string;

// a class for creating each note by passing in red or blue

class Notes : public sf::CircleShape
{
public:
	Notes(const sf::Color &color);
	Notes & operator=(const Notes &rhs);
};