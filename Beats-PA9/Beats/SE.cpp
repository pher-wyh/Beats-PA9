#include "SE.h"

RedSE::RedSE()
{
	if (buffer.loadFromFile("Don.wav"))
	{
		this->setBuffer(buffer);
	}
}

BlueSE::BlueSE()
{
	if (buffer.loadFromFile("Ka.wav"))
	{
		this->setBuffer(buffer);
	}
}