#include "MenuBG.h"

MenuBG::MenuBG()
{
	if (texture.loadFromFile("MenuBG.jpg"))
	{
		setTexture(texture);
	}
}