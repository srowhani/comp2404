/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      CArray.cc
 *   Purpose:   Function implementations for collection class CArray
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <string>

using namespace std;

#include "../lib/CArray.h"

//==========================================================

CArray::CArray() : size(0), capacity(1)
{
	this->elements = new Cell*[capacity]; //initialize the size to be 1
}

/* Copy Constructor */
CArray::CArray(const CArray& p) : size(p.size), capacity(p.capacity)
{
	this->elements = new Cell*[capacity];
	for(int i = 0 ; i < p.size ; i++){
		elements[i] = p.elements[i];
	}
}

CArray::~CArray() {
	delete[] elements;
}
int CArray::getSize() { return size; }

void CArray::destroy(){
	for(int i = 0; i < size; i++)
		delete elements[i];
}


Cell* CArray::get(int index)
{
	if (index >= 0 && index < size)
		return elements[index];
	return NULL;
}

int CArray::add(Cell* cell)
{
	if(size + 1 >= capacity)
		resize();
	
	elements[size++] = cell;
	return C_OK;
}
void CArray::resize()
{
	Cell** temp = new Cell*[this->capacity + 1]; // array of pointers == pointer to a pointer

	for(int i = 0 ; i < this->capacity ; i++)
		temp[i] = this->elements[i];
	delete[] elements;
	elements = temp;
	this->capacity++;
}
