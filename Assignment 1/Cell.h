#ifndef CELL_H
#define CELL_H

#include "PirateArray.h"

class Cell
{
	private:
		int cellNumber;
		int spaceRemaining;

	public:
		int addPirate(Pirate*);
		int getSpaceRemaining();
		int numPirates;
		PirateArray* pirates;
		int getCellNumber();
		Cell(int,int);
		~Cell();

};
#endif
