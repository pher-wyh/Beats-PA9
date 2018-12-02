#pragma once
#include <string.h>
#include <vector>
#include "Notes.h"
using std::vector;

// queue using vector for storing notes

class Queue
{
public:
	Queue();
	~Queue();
	void enqueue(const Notes &note);
	bool dequeue();

	vector<Notes> * getSheet() const;
	int getSize() const;

private:
	vector<Notes> *sheet;
	int size;
};