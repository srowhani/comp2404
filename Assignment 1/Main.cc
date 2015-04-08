#include "Control.h"

#include <cstdlib>

int randomInt(int max)
{
	double r = ( (double)rand() / ((double)(RAND_MAX)+(double)(1)) ); 
	return (int)(r * max);
}



int main(){
	Control* control = new Control();
	delete control;
	return 0;
}