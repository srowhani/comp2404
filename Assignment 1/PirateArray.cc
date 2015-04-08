#include "PirateArray.h"
#define MAX_PIRATES 16
PirateArray::PirateArray(){
	pirates = new Pirate*[MAX_PIRATES];
	maxSize = MAX_PIRATES;
	size = 0;
}
PirateArray::~PirateArray(){
	for(int i = 0; i < size; i++)
		delete pirates[i];
	delete[] pirates;
}
void PirateArray::add(Pirate *pi){
	pirates[size++] = pi;
}