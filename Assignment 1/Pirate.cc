#include "Pirate.h"

Pirate::Pirate(int i,int s){
	Pirate::id = i;
	Pirate::space = s;
}


int Pirate::getID(){return id;}
int Pirate::getSpace(){return space;}