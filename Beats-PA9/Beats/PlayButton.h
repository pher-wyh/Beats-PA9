#pragma once
#include <SFML\Graphics.hpp>
 
class PlayButton : public sf::Sprite
{
public:
	PlayButton();
private:
	sf::Texture texture;
};