#include "Normal.h"

Normal::Normal()
{
	if (texture.loadFromFile("Normal.png"))
	{
		texture.setSmooth(true);
		setTexture(texture);
	}
	setPosition(sf::Vector2f(700, 350));
}