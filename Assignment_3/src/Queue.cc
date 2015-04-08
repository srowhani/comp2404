/**
 * @author Seena Rowhani
 * Queue.cc
 * Implementation of lib/Queue.h
 *
 * Doubly linked list that provides a set
 * of utility functions to manage a collection
 * of Nodes.
 */

#include <iostream>
#include "../lib/Queue.h"

Queue :: Queue() : head(0){}

Queue :: Queue(const Queue& q) : head(0)
{
	for (Node* n = q.head; n != NULL; n = n->next)
		push(n->data);
}

Queue :: ~Queue()
{
	while(!empty())
		pop();
}
void Queue :: destroy()
{
	while(!empty()){
		delete front();
		pop();
	}
}
/**
 *  void push
 *  @param Pirate* p
 *  Takes a pirate, and appends it to the queue
 */
void Queue :: push(Pirate* p)
{
	Node* n = new Node(p);
	Node* c = head;

	if(head == 0){
		head = n;
		return;
	}
	while(c->next != 0)
		c = c->next;
	c->next = n;
	n->prev = c;
}

/**
 * void pop
 * Removes the pirate Node at the front
 * of the Queue
 */
void Queue :: pop()
{
	if(head == 0) return;
	Node* oldHead = head;
	head = head->next; //new head
	delete oldHead;
}

/**
 * Node* find
 * @param Pirate* p
 *
 * Returns the node that contains the specified Pirate
 * Otherwise, will return NULL (0)
 */
Node* Queue :: find(int& id)
{
	Node* currentNode = head;
	while(currentNode != 0){
		if(currentNode->data->getId() == id) return currentNode;
		currentNode = currentNode->next;
	}
	return 0;
}


Pirate* Queue :: remove(int& id)
{
	Node* currentNode = head;

	while(currentNode != 0){
		if(currentNode->data->getId() == id)
			break;
		currentNode = currentNode->next;
	}

	if(currentNode == 0) //nothing was found
		return 0;

	if(currentNode == head){ //found something
		head = currentNode->next;
	}
	else{
		currentNode->prev->next = currentNode->next;
		if(currentNode->next != 0) //the last element
			currentNode->next->prev = currentNode->prev;
	}
	Pirate* p = currentNode->data;
	delete currentNode;
	currentNode = 0;
	return p;
}

bool    Queue :: empty(){return head == 0;}
Pirate* Queue :: front(){return head->data;}
