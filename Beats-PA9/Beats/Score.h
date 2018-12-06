#pragma once
#include <SFML\Graphics.hpp>

class Score : public sf::Text 
{
public:
	Score();

private:
	sf::Font font;
};