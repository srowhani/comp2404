/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      BrigManager.cc
 *   Purpose:   Function implementations for control class BrigManager
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include "../lib/BrigManager.h"

using namespace std;

BrigManager::BrigManager()
{
	view = new UImanager;
	brig = new Brig;
}

BrigManager::~BrigManager()
{
	delete view;
	delete brig;
}

void BrigManager::launch()
{
	int    choice1 = -1;
	int    choice2 = -1;
	int    id      = -1;
	int    rc;

	while (choice1 != 0) {
		view->mainMenu(&choice1);
		if (choice1 == 0) {
			break;
		}
		else if (choice1 == 1) {
			choice2 = -1;
			while (choice2 != 0) {
				view->pirateMenu(&choice2);
				switch(choice2){
				case 0:
					break;
				case 1:
					int num;
					view->getNumPirates(&num);
					addPirates(num);
					break;
				case 2:
					int id;
					view->remove(id);
					brig->remove(id);
					break;
				}
				if (choice2 == 0) {
					break;
				}
				else if (choice2 == 1) {

				}

			}
		}
		else if (choice1 == 2) {
			view->printBrig(brig);
		}
		if (choice2 != 0)
			view->pause();
	}
}

void BrigManager::addPirates(int numPirates)
{
	Pirate* newPirate;

	while (numPirates > 0) {

		newPirate = new Pirate;

		brig->addPirate(newPirate);

		--numPirates;
	}


}

