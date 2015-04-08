#include "Control.h"

Control::Control(){
	b = new Brig();
	ui = new Ui();
	init();
}

Control::~Control(){
	
	delete b;
	delete ui;
}

void Control::init(){
	int choice = -1;
	int choice2 = -1;
	while(choice != 0){
		ui->mainMenu(choice); // Main Menu
		if(choice == 0) break;
		else if (choice == 1){ //Pirate menu
			
			do{
				ui->pirateMenu(choice2);
				if(choice2 == 0) break;
				else if(choice2 == 1){

					if(!(b->addPirates(ui->getNumberOfPirates()))) //checks if all the pirates are added successfully 
						ui->errAddingPirate();

				}
			}while(choice2 != 0);
		}else if(choice == 2){ // Prints all the cells and the pirates
			ui->printBrig(b);
		}
	}
	
}