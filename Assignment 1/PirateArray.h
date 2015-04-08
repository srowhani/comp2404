#ifndef PIRATEARRAY_H
#define PIRATEARRAY_H

#include "Pirate.h"

class PirateArray{
	private:
		int size;
		int maxSize;
	public:
		Pirate** pirates;
		PirateArray();
		void add(Pirate*);
		~PirateArray();

};
#endif