#include "Test.h"

void Test::testReadNotes()
{
	GamePlay testplay("Fade.ogg", "Fade.txt");
	
	if (testplay.getNotes()->getSheet()->begin()->getFillColor() == (sf::Color::Red))
	{
		cout << "test first note color - success." << endl;
		if ((testplay.getNotes()->getSheet()->begin() + 1)->getFillColor() == (sf::Color::Transparent))
		{
			cout << "test second note color - success." << endl;
			if ((testplay.getNotes()->getSheet()->begin())->getPosition() == (sf::Vector2f(1925, 320)))
			{
				cout << "test first note position - success." << endl;
				if ((testplay.getNotes()->getSheet()->begin() + 37)->getPosition() == (sf::Vector2f(1925, 320)))
				{
					cout << "test last note position - success." << endl;
					if ((testplay.getNotes()->getSheet()->begin() + 37)->getFillColor() == (sf::Color::Blue))
					{
						cout << "test last note color - success." << endl;
						if (testplay.getNotes()->getSize() == 37)
						{
							cout << "check size of queue - success." << endl;
						}
						else
						{
							cout << "check size of queue - failure." << endl;
							cout << "size is : " << testplay.getNotes()->getSize() << endl;
						}
					}
					else
					{
						cout << "test last note color - failure." << endl;
					}
				}
				else
				{
					cout << "test last note position - failure." << endl;
				}
			}
			else
			{
				cout << "test first note position - failure." << endl;
			}
		}
		else
		{
			cout << "test second note color - failure." << endl;
		}
	}
	else
	{
		cout << "test first note color - failure." << endl;
	}
}

void Test::testMoveNotes()
{
	GamePlay testplay("Fade.ogg", "Fade.txt");
	testplay.getNotes()->getSheet()->begin()->move(-20, 0);
	
	if (testplay.getNotes()->getSheet()->begin()->getPosition() == sf::Vector2f(1905, 320))
	{
		cout << "test move note - success." << endl;
		
	}
	else
	{
		cout << "test move note - failure." << endl;
	}

	testplay.getNotes()->getSheet()->begin()->setPosition(1905, 320);
	if (testplay.getNotes()->getSheet()->begin()->getPosition() == sf::Vector2f(1905, 320))
	{
		cout << "test set position - success." << endl;
	}
	else
	{
		cout << "test set position - failure." << endl;
	}

}