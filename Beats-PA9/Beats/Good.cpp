#include "Good.h"

Good::Good()
{
	if (texture.loadFromFile("Good.png"))
	{
		this->setTexture(texture);
	}
	setPosition(sf::Vector2f(-190, -50));
}