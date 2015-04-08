/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Pirate.cc
 *   Purpose:   Function implementations for entity class Pirate
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include "../lib/Pirate.h"
#include <iostream>
using namespace std;
int Pirate::nextId = 1001;

Pirate::Pirate() : id(nextId++),space(random(4) + 2){}
Pirate::Pirate(int n): id(nextId++), space(n){}
Pirate::~Pirate(){};

Dorc :: Dorc() : Pirate(random(3)+4){};
Borc :: Borc() : Pirate(random(3)+5){};
Porc :: Porc() : Pirate(random(3)+2){};

int Pirate::getId()    { return id; }
int Pirate::getSpace() { return space; }

