#Assignment 4 - COMP 2404 B
--
Written By:

- Seena Rowhani : 100 945 353
- Amr El-Naggar : 100 953 830

Due Date: Feb 24th 2015

##Purpose

To implement a Brig System to manage, allocate and deallocate space for pirates.
For this particular assignment, it's intended that the underlying datastructure for a 
PArray be a Queue. The implementation and declaration can be found within the lib and src folders.
The program works as intended, with no memory leaks.

For assignment 4, the program is to be extended to do the following:
- Implementation of overloaded operators, including [], +=, -=, and !
- Simple class inheritance, where Dorcs, Porcs, and Borcs inherit from Pirates

##Compiling Instructions

	make

To remove unwanted object and executable files after running:
	
	make clean
	
##Runtime Instructions

	make run or ./a4
	
To check for memory leaks, `valgrind` can be applied by such:
	
	valgrind ./a4
	
==

##File Structure
		
	├── Makefile
	├── README.md
	├── lib
	│   ├── Brig.h
	│   ├── BrigManager.h
	│   ├── CArray.h
	│   ├── Cell.h
	│   ├── Node.h
	│   ├── Pirate.h
	│   ├── Queue.h
	│   ├── Storage.h
	│   ├── UImanager.h
	│   └── defs.h
	├── src
	│   ├── Brig.cc
	│   ├── BrigManager.cc
	│   ├── CArray.cc
	│   ├── Cell.cc
	│   ├── Node.cc
	│   ├── Pirate.cc
	│   ├── Queue.cc
	│   ├── Storage.cc
	│   ├── UImanager.cc
	│   ├── main.cc
	│   └── random.cc
	├── uml.pdf
	└── uml.xml
