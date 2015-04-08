#ifndef QUEUE_H
#define QUEUE_H


#include "Node.h"


class Queue
{
  public:
	Queue();
	Queue(const Queue&);
	~Queue();

	void destroy();
	void push(Pirate*);
	void pop();
	bool empty();


	Node* find(int&);
	Pirate* remove(int&);
	Pirate* front();

  private:
	Node* head;
};


#endif
