#ifndef RINGBUFFER_H
#define RINGBUFFER_H

#include "Node.h"

class RingBuffer
{
public:
	RingBuffer(int s);
	void insert(int item);
	void remove();
	float calculateAverage();
	void printRingBuffer();
	~RingBuffer();
private:
	Node* start;
	Node* end;
};

#endif