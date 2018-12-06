#include "PlayBG.h"

PlayBG::PlayBG()
{
	if (texture.loadFromFile("PlayBG.jpg")) // set background image
	{
		setTexture(texture);
	}
}