#include "RingBuffer.h"
#include <iostream>
using namespace std;

RingBuffer::RingBuffer(int s)
{
	int size = s;
	start = new Node();
	end = start;

	Node* current = end;
	for (int i = 0; i < size; i++)
	{
		if (i == size - 1)
		{
			current->setNext(end);
		}
		else
		{
			current->setNext(new Node());
			current = current->getNext();
		}
	}
}

void RingBuffer::insert(int item)
{
	if (start->getContent() != 0 && start == end)
	{
		start = start->getNext();
	}
	end->setContent(item);
	end = end->getNext();
}

void RingBuffer::remove()
{
	if (start->getContent() != 0)
	{
		start->setContent(0);
		start = start->getNext();
	}
}

float RingBuffer::calculateAverage()
{
	float sum = 0;
	int size = 0;
	Node* current = start;
	do
	{
		sum += current->getContent();
		size++;
		current = current->getNext();
	} while (current != start);
	return sum/(float)size;
}

void RingBuffer::printRingBuffer()
{
	cout << "| ";
	Node* current = start;
	do
	{
		cout << current->getContent() << " | ";
		current = current->getNext();
	} while (current != start);
	cout << endl;
}

RingBuffer::~RingBuffer()
{
	Node* current = start;
	do
	{
		Node* next = current->getNext();
		delete current;
		current = next;
	} while (current != start);
	start = NULL;
	end = NULL;
}
