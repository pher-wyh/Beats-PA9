#include "BGM.h"

BGM::BGM()
{
	if (openFromFile("SkyHigh.ogg"))
	{
		setLoop(true);
		this->play();
		setVolume(20);
	}
}