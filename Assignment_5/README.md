##Assignment 5
_Written By: Seena Rowhani_

Purpose:
  You will modify your BMS brig management system from Assignment #4 to implement a templated collection class and
work with an STL list class. You will also incorporate polymorphism and abstract classes into your system.

Goal:
  Take the old BMS, and incorporate the STD list class. This essentially means
  swapping out all iteration via forloop with an iterator.

  An iterator works by having a sequence of pointers in a designated block. Each of these pointers are recognized as iterators, and will point to the specified templated class provided. In our case will be Cells.

 Making the Queue templated required a few changes. For the generic type to be the same in both the header and the implementation, I had to essentially move everything over the the .h file.

  As for the __Polymorphic__ portion of the assignment, the class that is now `pure virtual` is the Pirate class, with its implementations as Dorc, Borc, and Porc. The pure virtual function is the getName function that the UIManager will handle by printing out the name of the pirates along with its other info...


