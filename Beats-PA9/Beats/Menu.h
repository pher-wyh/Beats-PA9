#pragma once
#include "Screen.h"
#include "PlayButton.h"
#include "HowToPlayButton.h"
#include "Title.h"
#include "MenuBG.h"
#include "HowToPlay.h"
#include "SongSelection.h"

class Menu : public Screen // inherit from ? screen?
{
public:
	void run(sf::RenderWindow &window, BGM &bgm, MenuBG &bg);
	
private:
	PlayButton play;
	HowToPlayButton howToPlay;
	Title title;
	sf::Mouse mouse;
	HowToPlay instruction;
	SongSelection songSelection;

	void drawDefault(sf::RenderWindow &window);
};