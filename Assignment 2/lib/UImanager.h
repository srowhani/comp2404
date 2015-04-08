/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      UImanager.h
 *   Purpose:   Class definition for UI class UImanager
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef UIMANAGER_H
#define UIMANAGER_H

#include <string>
using namespace std;
#include "Brig.h"

class UImanager {
  public:
    UImanager();
    void mainMenu(int*);
    void pirateMenu(int*);
    void getNumPirates(int*);
    void printBrig(Brig*);
    void showError(string);
    void pause();
};

#endif

