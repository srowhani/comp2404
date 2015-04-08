#include "../lib/Storage.h"
#include "../lib/CArray.h"

using namespace std;

Storage :: Storage() : cellArr(new CArray()){}
Storage :: ~Storage() {
	cellArr->destroy();
	delete cellArr;


}
/**
 * Function: retrieve
 * Parameters: CArray**
 *
 * Takes a pointer pointing to a pointer of a CellArray
 * object. This way the parameter can be used as an output param.
 *
 * Using the copy constructor of CArray
 * returns its current value as an output
 * parameter.
 */

void Storage::retrieve(CArray** _cellArr)
{
	*_cellArr = new CArray(*this->cellArr);
	
}

/**
 * Function: update
 * Parameters: 
 * 		UpdateType - not implemented
 * 		CArray* - Input parameter, copy from	
 * Updates the local collection with the specified input
 * parameter.
 */
void Storage::update(UpdateType update, CArray* _cellArr)
{
	delete cellArr;
	this->cellArr = new CArray(*_cellArr);
	switch(update){default:break;} //do nothing for now
	return;
}
