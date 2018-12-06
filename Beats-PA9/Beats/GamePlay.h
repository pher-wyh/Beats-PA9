#pragma once
#include <fstream>
#include <iostream>
#include <string>
#include "BGM.h"
#include "Notes.h"
#include "Bar.h"
#include "SE.h"
#include "Target.h"
#include "Queue.h"
#include "PlayBG.h"
#include "Good.h"
#include "Combo.h"
#include "Result.h"
#include "Score.h"
#include "Hit.h"


using std::cout;
using std::endl;
using std::ifstream;

class GamePlay// inherit from ? screen?
{
public:
	GamePlay(const string &songfile, const string &sheetfile, const int &newSpeed);
	~GamePlay();
	void run(sf::RenderWindow &window); // pass in the song and the notes?
	void readNotes(const string &sheetfile);
	Queue * getNotes() const;

private:
	// Queue of notes read from a file? 
	Queue *notes;
	Queue *currentNotes;
	Queue *missedNotes;
	Bar bar;
	Target target;
	Good good;
	RedSE bass;
	BlueSE snare;
	sf::Music song;
	PlayBG background;
	Combo combo;
	Result result;
	Score score;
	Hit hit;
	int i;
	int counter;
	int speed;
	int comboNum;
	int totalHit;
	int totalNotes;
	int totalScore;

	void drawDefault(sf::RenderWindow &window);
	void loadCurrent();
	void moveNotes(sf::RenderWindow &window, Queue *queue);
	void checkHit(const sf::Color &color);
	void checkMissed();
	void drawCombo(sf::RenderWindow &window);
	void replay();
	void showResult(sf::RenderWindow &window);
	void showScore(sf::RenderWindow &window);
};