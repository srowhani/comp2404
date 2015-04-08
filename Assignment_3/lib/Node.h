#ifndef NODE_H
#define NODE_H
#include "Pirate.h"

class Node
{
	friend class Queue;

	public:
		Node();
		Node(Pirate*);
	private:
		Pirate* data;
		Node* next;
		Node* prev;

};

#endif
