#pragma once
#include <fstream>
#include "Notes.h"
#include "Bar.h"
#include "SE.h"
#include "Target.h"
#include "Songs.h"
#include "Queue.h"

using std::ifstream;

class GamePlay // inherit from ? screen?
{
public:
	GamePlay(const string &songfile, const string &sheetfile);
	~GamePlay();
	void run(sf::RenderWindow &window); // pass in the song and the notes?
	void readNotes(const string &sheetfile);

	Queue * getNotes() const;

private:
	// Queue of notes read from a file? 
	Queue *notes;
	Bar bar;
	Target target;
	RedSE bass;
	BlueSE snare;
	sf::Music song;
};