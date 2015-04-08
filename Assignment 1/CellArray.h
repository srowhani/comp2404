#ifndef CELLARRAY_H
#define CELLARRAY_H

#include "Cell.h"


class CellArray{
	private:
		
		int getNextCellId();
	public:
		bool add(Pirate*);
		Cell** cells;
		int numCells;
	    CellArray();
	    ~CellArray();
};
#endif