#pragma once
#include <SFML\Graphics.hpp>

// the success / failure text
class Result : public sf::Text
{
public:
	Result();

private:
	sf::Font font;
};