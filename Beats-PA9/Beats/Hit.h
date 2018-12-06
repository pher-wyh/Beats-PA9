#pragma once
#include <SFML\Graphics.hpp>

class Hit : public sf::Text
{
public:
	Hit();

private:
	sf::Font font;
};