#include "Queue.h"

Queue::Queue()
{
	sheet = new vector<Notes>;
}

Queue::~Queue()
{
	sheet->clear();

	delete sheet;
}

void Queue::enqueue(const Notes &note)
{
	sheet->push_back(note);
}

Notes Queue::dequeue()
{
	Notes tempNote(sf::Color::Transparent);
	if (sheet->size() != 0)
	{
		tempNote = sheet->front();
		sheet->erase(sheet->begin());
	}
	return tempNote;
}

vector<Notes> * Queue::getSheet() const
{
	return sheet;
}