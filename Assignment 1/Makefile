a1.out: Brig.o Cell.o CellArray.o Control.o Main.o Pirate.o PirateArray.o Ui.o
	g++ -o a1.out Brig.o Cell.o CellArray.o Control.o Main.o Pirate.o PirateArray.o Ui.o

Brig.o: Brig.cc Brig.h
	g++ -c Brig.cc Brig.h

Cell.o: Cell.cc Cell.h
	g++ -c Cell.cc Cell.h

CellArray.o: CellArray.cc CellArray.h
	g++ -c CellArray.cc

Control.o: Control.cc Control.h
	g++ -c Control.cc Control.h

Main.o: Main.cc
	g++ -c Main.cc

Pirate.o: Pirate.cc
	g++ -c Pirate.cc

PirateArray.o: PirateArray.cc Ui.h
	g++ -c PirateArray.cc

Ui.o: Ui.cc Ui.h
	g++ -c Ui.cc
clean:
	rm *.o *.out *.gch