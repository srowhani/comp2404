/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      UImanager.cc
 *   Purpose:   Function implementations for UI class UImanager
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <iomanip>
#include <string>
#include <sstream>
#include <cstdlib>
#include "../lib/UImanager.h"

using namespace std;

UImanager::UImanager() { }

void UImanager::mainMenu(int* choice)
{
  string str;

  *choice = -1;

#ifndef TEST_MODE

#endif

  cout<< "\n\n\n                   WELCOME TO THE BRIG MANAGEMENT SYSTEM \n\n";
  cout << "( 1 )  Manage pirates" << endl;
  cout << "( 2 )  View brig" << endl;
  cout << "( 0 )  Exit" << endl;

  while (*choice < 0 || *choice > 2) {
    cout << "Enter your selection:  ";
    getline(cin, str);
    stringstream ss(str);
    ss >> *choice;
  }
}

void UImanager::pirateMenu(int* choice)
{
  string str;

  *choice = -1;

#ifndef TEST_MODE
  system("clear");
#endif

  cout<< "\n\n\n                   PIRATE MANAGEMENT MENU \n\n";
  cout << "( 1 )  Add pirate" << endl;
  cout << "( 0 )  Exit" << endl;

  while (*choice < 0 || *choice > 1) {
    cout << "Enter your selection:  ";
    getline(cin, str);
    stringstream ss(str);
    ss >> *choice;
  }
}

void UImanager::getNumPirates(int* numPirates)
{
  string    str;

  cout << endl << "Enter the number of pirates:   ";
  getline(cin, str);
  stringstream ss1(str);
  ss1 >> *numPirates;
}

void UImanager::printBrig(Brig* brig)
{
  CArray& cells = brig->getCells();

  cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
  cout<<"Brig: #cells=" << cells.getSize() <<endl;

  for (int i=0; i<cells.getSize(); ++i) {
    cout << "--Cell "<<i<<": space remaining="<<cells.get(i)->getSpace()<<endl;
    PArray& pa = cells.get(i)->getPirates();
    for (int j=0; j<pa.getSize(); ++j) {
      if (pa.get(j) == 0)
      continue;
      cout <<"----Pirate id: "<< pa.get(j)->getId() 
           << "  space: " << pa.get(j)->getSpace() << endl;
    }
  }
  delete &cells;
}

void UImanager::showError(string err)
{
  cout << err << " -- press enter to continue...";
  cin.get();
}

void UImanager::pause()
{
  string str;

  cout << endl << "\nPress enter to continue...";
  getline(cin, str);
}

