/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      Pirate.h
 *   Purpose:   Class definition for entity class Pirate
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef PIRATE_H
#define PIRATE_H

#include <iostream>
#include <string>

using namespace std;

#include "defs.h"

class Pirate 
{
  public:
    Pirate();
    Pirate(int space);
    virtual ~Pirate();

    int getId();
    int getSpace();
  protected:
    int space;
  private:
    static int nextId;
    int id;
};

class Dorc : public Pirate
{
	public:
		Dorc();
};
class Borc : public Pirate
{
	public:
		Borc();
};
class Porc : public Pirate
{
	public:
		Porc();
};

#endif

