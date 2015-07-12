#include "Node.h"

using namespace std;

Node::Node()
{
	content = 0;
}

Node* Node::getNext()
{
	return next;
}

void Node::setNext(Node* n)
{
	next = n;
}

int Node::getContent()
{
	return content;
}

void Node::setContent(int c)
{
	content = c;
}

Node::~Node()
{
	next = 0;
}
