OBJ = main.o BrigManager.o Brig.o Storage.o Cell.o Pirate.o UImanager.o random.o CArray.o Queue.o

a3:	$(OBJ)
	g++ -o a5 $(OBJ)

main.o:	src/main.cc
	g++ -c src/main.cc 

BrigManager.o:	src/BrigManager.cc lib/BrigManager.h 
	g++ -c src/BrigManager.cc 

UImanager.o:	src/UImanager.cc lib/UImanager.h 
	g++ -c src/UImanager.cc 

Cell.o:	src/Cell.cc lib/Cell.h lib/defs.h
	g++ -c src/Cell.cc 

Brig.o:	src/Brig.cc lib/Brig.h lib/defs.h
	g++ -c src/Brig.cc

Storage.o: src/Storage.cc lib/Storage.h lib/CArray.h
	g++ -c src/Storage.cc 

Pirate.o:	src/Pirate.cc lib/Pirate.h
	g++ -c src/Pirate.cc 

CArray.o:	src/CArray.cc lib/CArray.h
	g++ -c src/CArray.cc 

Queue.o: src/Queue.cc lib/Queue.h
	g++ -c src/Queue.cc 


random.o:	src/random.cc
	g++ -c src/random.cc 

run:	a5
		./a5
valgrind:	a5
	valgrind ./a5
clean:
	rm -f *.o a5
tar:
	tar -zcvf a5.tar . . 
