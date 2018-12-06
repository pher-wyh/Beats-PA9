#include "Song3.h"

Song3::Song3()
{
	if (texture.loadFromFile("Song3.png"))
	{
		texture.setSmooth(true);
		setTexture(texture);
	}
	setPosition(sf::Vector2f(100, 550));
}