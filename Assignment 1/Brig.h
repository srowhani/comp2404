#ifndef BRIG_H
#define BRIG_H

#include "CellArray.h"


class CellArray;
class Brig
{
private:
	
	int getNextPirateId();
	
public:
	bool addPirates(int);
	CellArray* cells;
	Brig();
	~Brig();

	
	
};
#endif