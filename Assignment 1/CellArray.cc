#include "CellArray.h"

#define MAX_CELLS      48
#define MAX_CELL_SPACE  7
#define null 0



CellArray::CellArray(){
	cells = new Cell*[MAX_CELLS];
	numCells = 0;
}

CellArray::~CellArray(){
	
	for(int i = 0; i < numCells; i++)
		delete cells[i];
	delete[] cells;
}

int CellArray::getNextCellId()
{
  static int id = 1;

  return(id++);
}
bool CellArray::add(Pirate* p){
	
	for(int i = 0; i < numCells; i++){
		if(cells[i]->addPirate(p))
			return true;
	}
	if(MAX_CELLS == numCells){
		return false;
	}//Make new cell and adds the pirate to it
	cells[numCells] = new Cell(getNextCellId(),MAX_CELL_SPACE);
	cells[numCells++]->addPirate(p);
	return true;
}