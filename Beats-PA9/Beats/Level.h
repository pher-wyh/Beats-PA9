#pragma once
#include <string.h>
#include "MenuBG.h"
#include "LevelBoard.h"
#include "Easy.h"
#include "Normal.h"
#include "Hard.h"
#include "GamePlay.h"
#include "ExitButton.h"
#include "BGM.h"
using std::string;

class Level
{
public:
	void run(sf::RenderWindow &window, const string &songname, const int &speed, BGM &bgm, MenuBG &bg);

private:
	LevelBoard board;
	Easy easy;
	Normal normal;
	Hard hard;
	ExitButton exit;
};