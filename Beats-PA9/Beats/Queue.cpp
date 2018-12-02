#include "Queue.h"

Queue::Queue()
{
	size = 0;
	sheet = new vector<Notes>;
}

Queue::~Queue()
{
	while (!dequeue())
	{
		// delete all elements in queue
	}

	delete sheet;
}

void Queue::enqueue(const Notes &note)
{
	sheet->push_back(note);
	size++;
}

bool Queue::dequeue()
{
	bool success = false;
	if (size != 0)
	{
		success = true;
		size--;
		sheet->erase(sheet->begin());
	}
	return success;
}

vector<Notes> * Queue::getSheet() const
{
	return sheet;
}

int Queue::getSize() const
{
	return size;
}