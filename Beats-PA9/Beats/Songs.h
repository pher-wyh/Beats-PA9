#pragma once
#include <SFML\Audio.hpp>
#include <string.h>

using std::string;

//  a class for loading songs from files or put it into a data structure
class Songs : public sf::Music
{
public:
	Songs(const string &filename);
};