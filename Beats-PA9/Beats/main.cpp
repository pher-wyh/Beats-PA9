/*******************************************************************************************

* Programmer: Christopher Wong                                                             *

* Class: CptS 122, Fall  2018															   *

* Programming Assignment: PA9															   *

* Date: November 29th, 2018																   *

* Description: BEATS - Music game														   *
*			-Hit the notes at the right moment!	
*			-Hit 75% correctly to pass!
*******************************************************************************************/

#include <SFML\Graphics.hpp>
#include "Menu.h"
#include "Test.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(1920, 1080), "Beats");
	window.setFramerateLimit(60);
	window.setVerticalSyncEnabled(false);

	BGM bgm;
	MenuBG bg;
	Menu menu;

	while (window.isOpen())
	{
		menu.run(window, bgm, bg);
	}
	
	// test cases - show result after the game ends
	Test test;
	test.testReadNotes();
	test.testMoveNotes();
	test.testEnqueue();
	test.testDequeue();

	return 0;
}