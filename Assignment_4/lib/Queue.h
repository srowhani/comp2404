#ifndef QUEUE_H
#define QUEUE_H


#include "Node.h"


class Queue
{
  public:
	Queue();
	Queue(const Queue&);
	~Queue();

	//Operators
	Queue& operator+=(Pirate*);
	Queue& operator-=(Pirate*);

	Pirate* operator[](int);

	bool operator!();

	void destroy();
	void push(Pirate*);
	void pop();
	bool empty();


	Pirate* find(int&);
	Pirate* remove(int);
	Pirate* front();

  private:
	Node* head;
};


#endif
