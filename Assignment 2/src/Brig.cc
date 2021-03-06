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
    if ( cells->get(i)->fits(pirate)) 
      index = i;

  if (index >= 0) {
    rc = cells->get(index)->getPirates().add(pirate);
    if (rc != C_OK)
      return C_NOK;
    cells->get(index)->reduceSpace(pirate->getSpace());
  }
  else {
    newCell = new Cell();
    cells->add(newCell);
    rc = newCell->getPirates().add(pirate);
    if (rc != C_OK)
      return C_NOK;
    newCell->reduceSpace(pirate->getSpace());
  }
  db->update(ADD, cells);
  delete cells;
  return C_OK;
}

CArray& Brig::getCells()
{
	CArray* cells;
	db->retrieve(&cells); //pass the reference of the cells pointer
	return *cells; //cells is now an updated copy of the database
}

