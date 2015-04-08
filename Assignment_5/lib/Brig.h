/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Brig
 *   Purpose:   Class definition for entity class Brig; manages cell collection
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef BRIG_H
#define BRIG_H

#include <iostream>
#include <string>

using namespace std;

#include "defs.h"
#include "CArray.h"
#include "Storage.h"

class Brig 
{
  public:
    Brig();
    ~Brig();
    int remove(int);
    int addPirate(Pirate*);
    CArray& getCells();

    Brig& operator+=(Pirate*);
  private:
    Storage* db;
};

#endif

