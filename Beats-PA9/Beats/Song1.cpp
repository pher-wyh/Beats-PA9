#include "Song1.h"

Song1::Song1()
{
	if (texture.loadFromFile("Song1.png"))
	{
		texture.setSmooth(true);
		setTexture(texture);
	}
	setPosition(sf::Vector2f(100, 50));
}