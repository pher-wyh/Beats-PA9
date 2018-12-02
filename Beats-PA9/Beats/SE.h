#pragma once
#include <SFML\Audio.hpp>
// sound effect - sound when hitting the keys

class RedSE : public sf::Sound
{
public:
	RedSE();
	
private:
	sf::SoundBuffer buffer; // open the sound file
};

class BlueSE : public sf::Sound
{
public:
	BlueSE();

private:
	sf::SoundBuffer buffer; 
};