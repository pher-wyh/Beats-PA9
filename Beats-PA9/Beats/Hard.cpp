#include "Hard.h"

Hard::Hard()
{
	if (texture.loadFromFile("Hard.png"))
	{
		texture.setSmooth(true);
		setTexture(texture);
	}
	setPosition(sf::Vector2f(700, 600));
}