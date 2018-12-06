#include "ExitButton.h"

ExitButton::ExitButton()
{
	if (texture.loadFromFile("ExitButton.png"))
	{
		texture.setSmooth(true);
		setTexture(texture);
	}
	setPosition(sf::Vector2f(750, 850));
}