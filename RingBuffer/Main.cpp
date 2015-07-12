#include <iostream>
#include "RingBuffer.h"
using namespace std;

int main () {
	cout << "This is a simple ring buffer implementation." << endl;
	cout << "What size do you want to make the ring buffer?" << endl;
	int size;
	cin >> size;
	RingBuffer* rb = new RingBuffer(size);
	rb->printRingBuffer();
	bool running = true;
	while (running)
	{
		cout << "Commands: I to insert, R to remove, A to show average, Q to quit" << endl;
		char input;
		cin >> input;
		if (input == 'I')
		{
			int toInsert = 0;
			cout << "Type an integer to insert." << endl;
			cin >> toInsert;
			rb->insert(toInsert);
		}
		else if (input == 'R')
		{
			rb->remove();
		}
		else if (input == 'A')
		{
			cout << "Average: " << rb->calculateAverage() << endl;
		}
		else if (input == 'Q')
		{
			running = false;
		}
		rb->printRingBuffer();
	}
	delete rb;
	return 0;
}