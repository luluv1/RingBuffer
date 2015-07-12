#ifndef NODE_H
#define NODE_H

class Node
{
public:
	Node();
	Node* getNext();
	void setNext(Node* n);
	int getContent();
	void setContent(int c);
	~Node();
private:
	Node* next;
	int content;
};

#endif