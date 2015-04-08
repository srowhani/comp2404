#include "Brig.h"


#define MAX_CELLS 48
#define MAX_CELL_SPACE  7
#define null 0
extern int randomInt(int);

Brig::Brig(){
	
	cells = new CellArray();
} 

Brig::~Brig(){
	delete cells;
}

int Brig::getNextPirateId() 
{
  static int id = 1001;

  return(id++);
}


bool Brig::addPirates(int x){
	bool a = true;
	while(x > 0){
		
		Pirate *p = new Pirate(getNextPirateId(), randomInt(4) + 2);
		if(!(cells->add(p))){// Deletes the pirate if there is no space for it and set bool a to false
			a = false;
			delete p;
		}
		
		x--;
	}
	return a;
}