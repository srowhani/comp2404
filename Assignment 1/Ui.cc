#include "Ui.h"



void Ui::mainMenu(int &choice){
	choice = -1;
	cout<<"\n\n\n                   WELCOME TO THE BRIG MANAGEMENT SYSTEM \n\n";
  cout<<"( 1 )  Manage pirates\n";
  cout<<"( 2 )  View brig\n";
  cout<<"( 0 )  Exit\n";
  while(choice < 0 || choice > 2){
  	cout<<"Enter your selection: ";
  	cin>>choice;
  }
}

void Ui::pause(){
	cout<<"\nPress enter to continue...";
  char x;
  cin>>x;
}

int Ui::getNumberOfPirates(){
	cout<<"\nEnter the number of pirates:   ";
  int num;
	cin>>num;
  return num;
}

void Ui::pirateMenu(int &choice){
	choice = -1;
	cout<<"\n\n\n                   PIRATE MANAGEMENT MENU \n\n";
  cout<<"( 1 )  Add pirates\n";
  cout<<"( 0 )  Exit\n";
  while(choice < 0 || choice > 1){
  	cout<<"Enter your selection: ";
  	cin>>choice;
  }

}

void Ui::printBrig(Brig* brig){
 int i, j;

  cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
  cout<<"Brig: #cells="<< brig->cells->numCells<<endl;

  for (i=0; i<brig->cells->numCells; ++i) {
    cout<<"--Cell "<< i << ": space remaining="<< brig->cells->cells[i]->getSpaceRemaining()<<endl;
    Cell* cell = brig->cells->cells[i];
    for (j=0; j<cell->numPirates; ++j) {
      if (cell->pirates->pirates[j] == 0)
      continue;
      cout<<"----Pirate id: "<<cell->pirates->pirates[j]->getID()<<"  space: "<<cell->pirates->pirates[j]->getSpace()<<endl;
    }
  }
}

void Ui::errAddingPirate(){
	cout<<"Could not add pirate \n";
  
}