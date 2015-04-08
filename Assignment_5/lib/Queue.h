#ifndef QUEUE_H
#define QUEUE_H

template <class T> class Queue
{
public:
	Queue() : head(0) {};

	Queue(const Queue& q) : head(0){
		for (Node* n = q.head; n != 0; n = n->next)
			push(n->data);
	}
	~Queue(){
		while(!empty())
			pop();
	}

	//Operators
	Queue& operator+=(T p){
		push(p);
		return *this;
	}

	Queue& operator-=(T p){
		if(p != 0)
			remove((p->getId()));
		return *this;
	}

	T operator[](int j){
		Node* current = head;
		for(int i = 0; i < j && current != 0 ; i++, current = current->next);
		if(current == 0)
			return 0;
		return current->data;;
	}

	bool operator!(){
		return !empty();
	}

	void destroy(){
		while(!empty()){
			delete front();
			pop();
		}
	}

	void push(T p){
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

	void pop(){
		if(head == 0) return;
		Node* oldHead = head;
		head = head->next; //new head
		delete oldHead;
	}

	bool empty(){
		return head == 0;
	}

	T find(int& id){
		Node* currentNode = head;
		while(currentNode != 0){
			if(currentNode->data->getId() == id) return currentNode->data;
			currentNode = currentNode->next;
		}
		return 0;
	}

	T remove(int id){
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
		T p = currentNode->data;
		delete currentNode;
		currentNode = 0;
		return p;
	}
	T front(){
		return head != 0 ? head->data : 0;
	}

private:
	class Node
	{
	public:
		Node()    : data(0), next(0), prev(0) {};
		Node(T p) : data(p), next(0),prev(0) {};
		T data;
		Node* next;
		Node* prev;
	};
	Node* head;
};


#endif
