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
CArray::CArray(){};

/* Copy Constructor */
CArray::CArray(const CArray& p)
{
	std::copy(p.elements.begin(), p.elements.end(), std::back_inserter(elements));
}

CArray::~CArray() {
	elements.empty();
}
void CArray :: destroy(){
	for(list<Cell*>::iterator i = elements.begin() ; i != elements.end() ; i++){
			(*i)->destroy();
			delete *i;
	}
}
int CArray::getSize() { return elements.size(); }



Cell* CArray::get(int index)
{

	if (index < 0 || index >= elements.size()){
		cout << "Falsely returning\n";
		return 0;

	}
	list<Cell*>::iterator i = elements.begin();
	advance(i, index);
	return *i;

}

int CArray::add(Cell* cell)
{
	elements.push_back(cell);
	return C_OK;
}

//Operators

CArray& CArray :: operator+=(Cell* c)
{
	if(c != 0)
		add(c);
	return *this;
}

Cell* CArray :: operator[](int a)
{
	return get(a);
}


