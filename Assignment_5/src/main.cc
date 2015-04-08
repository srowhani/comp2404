/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
 *
 *   File:      main.cc
 *   Purpose:   Main function 
 *   Author:    Christine Laurendeau
 *   Date:      Jul. 21, 2014
 *   (c) 2014 Christine Laurendeau
 *       ALL RIGHTS RESERVED, DO NOT USE OR RE-POST WITHOUT PERMISSION
 *
 * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

#include "../lib/BrigManager.h"


int main()
{
  BrigManager manager;

  srand((unsigned)time(0));

  manager.launch();
}

