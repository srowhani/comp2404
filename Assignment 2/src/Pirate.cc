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

int Pirate::nextId = 1001;

Pirate::Pirate() 
{
  id = nextId++;
  space = random(4) + 2;
}

int Pirate::getId()    { return id; }
int Pirate::getSpace() { return space; }

