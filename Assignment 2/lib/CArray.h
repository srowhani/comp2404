/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      CArray.h
 *   Purpose:   Class definition for collection class CArray; 
 *              contains cell collection
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#ifndef CARRAY_H
#define CARRAY_H

#include "Cell.h"
#include "Pirate.h"

class CArray
{
  public:
    CArray();
    CArray(const CArray&);
    ~CArray();
    int   getSize();
    int   add(Cell*);
    void destroy();
    void resize();

    Cell* get(int);
  private:
    int    size;
    int    capacity;
    Cell** elements;
};

#endif
