#include <SFML\Graphics.hpp>
#include "Notes.h"
#include "Target.h"
#include "Bar.h"
#include "GamePlay.h"
#include "Test.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Beats");

	GamePlay Fade("Fade.ogg", "Fade.txt");
	
	while (window.isOpen())
	{
		window.clear(sf::Color::White);
		Fade.run(window);

	}

	Test test;
	test.testReadNotes();
	test.testMoveNotes();
	return 0;
}