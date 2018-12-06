#include "Song2.h"

Song2::Song2()
{
	if (texture.loadFromFile("Song2.png"))
	{
		texture.setSmooth(true);
		setTexture(texture);
	}
	setPosition(sf::Vector2f(100, 300));
}