#ifndef STORAGE_H
#define STORAGE_H

#include "CArray.h"
enum UpdateType 
{
	ADD, 
	DELETE
};
class Storage
{
	public://=================================================
		//Constructors / Destructors
		Storage();
		~Storage();

		void retrieve(CArray**);
		void update(UpdateType update, CArray*);

	private://=================================================
		CArray* cellArr;
		
};

#endif
