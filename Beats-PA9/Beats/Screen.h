#pragma once
#include <SFML\Graphics.hpp>
#include "BGM.h"
#include "MenuBG.h"

class Screen
{
public:
	virtual void run(sf::RenderWindow &window, BGM &bgm, MenuBG &bg) = 0; // pure virtual
};