#pragma once
#include <SFML\Graphics.hpp>
#include "ExitButton.h"
class HowToPlay
{
public:
	HowToPlay();
	void run(sf::RenderWindow &window);

private:
	ExitButton exit;
	sf::Sprite info;
	sf::Texture texture;
};