/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig.cc
 *   Purpose:   Function implementations for entity class Brig
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "../lib/Brig.h"
#include "../lib/Storage.h"

using namespace std;
Brig::Brig() : db(new Storage()){}
Brig::~Brig() {delete db; }

int Brig::addPirate(Pirate* pirate)
{
  Cell* newCell;
  CArray* cells;
  db->retrieve(&cells);
  int index = -1;
  int rc;
  
  for (int i=0; i<cells->getSize(); ++i) 
    if ( cells->get(i)->fits(pirate)){
      index = i;
      break;
    }

  if (index >= 0) {
    cells->get(index)->getPirates().push(pirate);
    cells->get(index)->reduceSpace(pirate->getSpace());
  }
  else {
    newCell = new Cell();
    cells->add(newCell);
    newCell->getPirates().push(pirate);
    newCell->reduceSpace(pirate->getSpace());
  }
  db->update(ADD, cells);
  delete cells;
  return C_OK;
}

int Brig :: remove(int& id)
{
	CArray* temp;
	db->retrieve(&temp); //retrieve a temp copy from db
	for(int i = 0 ; i < temp->getSize() ; i++){
		Pirate* p;
		if((p = temp->get(i)->getPirates().remove(id)) != 0){ //if able to remove
			temp->get(i)->increaseSpace(p->getSpace());
			delete p;
			db->update(ADD, temp);
			delete temp; //delete temp here, since we return true
			return 1; //return 1 for success
		}
	}

	delete temp; //get rid of temp copy (won't delete pirates)
	return 0; //return 0 to
}

CArray& Brig::getCells()
{
	CArray* cells;
	db->retrieve(&cells); //pass the reference of the cells pointer
	return *cells; //cells is now an updated copy of the database
}

