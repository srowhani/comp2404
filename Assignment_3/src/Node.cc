/**
 * @author Seena Rowhani
 * Node.cc
 * Implementation of lib/Node.h
 *
 * Node that stores a reference to previous and next
 * nodes within the queue class. Also contains
 * a pointer to a pirate, referenced as data.
 */
#include <iostream>
#include "../lib/Node.h"


Node :: Node () : data(0), next(0), prev(0){}
Node :: Node (Pirate* p) : data(p), next(0), prev(0){}

