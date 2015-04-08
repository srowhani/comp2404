#ifndef CONTROL_H
#define CONTROL_H

#include "Brig.h"
#include "Ui.h"


class Control{
private:
	Brig* b;
	Ui* ui;
	void init();
public:
	Control();
	~Control();


};
#endif
