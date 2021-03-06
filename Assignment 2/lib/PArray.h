/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      PArray.h
 *   Purpose:   Class definition for collection class PArray;
 *              contains pirate collection
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef PARRAY_H
#define PARRAY_H

#include "Pirate.h"

class PArray
{
  public:
    PArray();
    PArray(const PArray&);
    ~PArray();
    int     add(Pirate*);
    int     getSize();
    void resize();
    Pirate* getWithId(int);
    Pirate* get(int);
  private:
    int     size;
    int 	capacity;
    Pirate** elements;
};

#endif
