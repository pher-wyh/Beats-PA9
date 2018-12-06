#include "PlayButton.h"

PlayButton::PlayButton()
{
	if (texture.loadFromFile("PlayButton.png"))
	{
		texture.setSmooth(true);
		this->setTexture(texture);
	}
	this->setPosition(sf::Vector2f(725, 600));
}