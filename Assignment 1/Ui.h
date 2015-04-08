#ifndef UI_H
#define UI_H

#include <iostream>
#include "Brig.h"

using namespace std;

class Brig;
class Ui
{
	public:
		void mainMenu(int&);
		void printBrig(Brig&);
		void pause();
		int getNumberOfPirates();
		void pirateMenu(int&);
		void errAddingPirate();
		void printBrig(Brig*);

};
#endif // UI_H