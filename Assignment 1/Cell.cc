#include "Cell.h"

#define MAX_PIRATES 16

Cell::Cell(int num, int s){
	cellNumber = num;
	spaceRemaining = s;
	numPirates = 0;
	pirates = new PirateArray();
}
Cell::~Cell(){

	delete pirates;
}


int Cell::getCellNumber(){return cellNumber;}
int Cell::getSpaceRemaining(){return spaceRemaining;}
int Cell::addPirate(Pirate* pi){
	if (spaceRemaining >= pi->getSpace() && numPirates < MAX_PIRATES){
		spaceRemaining -= pi->getSpace();
		pirates->add(pi);
		numPirates++;
		return 1;
	}else{
		return 0;
	}
}
