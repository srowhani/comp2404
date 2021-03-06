/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      PArray.cc
 *   Purpose:   Function implementations for collection class PArray
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <string>
using namespace std;

#include "../lib/PArray.h"

PArray::PArray() : size(0), capacity(1)
{ 
	elements = new Pirate*[capacity];
	elements[0] = 0;
}

/**
 * Copy Constructor
 * ========
 * Copies all elements from the given array to self
 */
PArray::PArray(const PArray &p) : size(p.size), capacity(p.capacity)
{
	elements = new Pirate*[capacity];
	for(int i = 0 ; i < p.size ; i++)
		elements[i] = p.elements[i];

}

PArray::~PArray() 
{
	for(int i = 0; i < size; i++)
		delete elements[i];
	delete[] elements;
}

int PArray::add(Pirate *pirate)
{
	if (size + 1 == capacity)
		this->resize();
	

	elements[size++] = pirate;
	return C_OK;
}
/**
 * Grows everytime an element is added
 */
void PArray::resize()
{
	Pirate** temp = new Pirate*[this->capacity + 1]; // array of pointers == pointer to a pointer

	for(int i = 0 ; i < this->capacity ; i++)
		temp[i] = this->elements[i];
	delete[] elements;
	elements = temp;
	//delete[] temp;
	this->capacity++;
}

Pirate* PArray::getWithId(int id)
{
	for (int i=0; i<size; ++i)
	{
		if (elements[i] == 0)
			continue;
		if (elements[i]->getId() == id)
			return elements[i];
	}

	return(0);
}

Pirate* PArray::get(int index)
{
	if (index >= 0 && index < size)
		return elements[index];

	return 0;
}

int PArray::getSize() { return size; }

