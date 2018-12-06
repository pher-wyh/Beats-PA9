#include "Easy.h"

Easy::Easy()
{
	if (texture.loadFromFile("Easy.png"))
	{
		texture.setSmooth(true);
		setTexture(texture);
	}
	setPosition(sf::Vector2f(700, 100));
}