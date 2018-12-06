#include "HowToPlayButton.h"

HowToPlayButton::HowToPlayButton()
{
	if (texture.loadFromFile("HowToPlayButton.png"))
	{
		texture.setSmooth(true);
		setTexture(texture);
	}
	setPosition(sf::Vector2f(450, 850));
}