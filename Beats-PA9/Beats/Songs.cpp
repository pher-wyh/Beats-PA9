#include "Songs.h"

Songs::Songs(const string &filename)
{
	this->openFromFile(filename);
	this->setVolume(20);
}