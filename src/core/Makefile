GCC = g++
LINK = -lncurses

all: main

main.o: main.cc
	$(GCC) -c main.cc

ceobject.o: ceobject.h ceobject.cc
	$(GCC) -c ceobject.cc

game.o: game.h game.cc
	$(GCC) -c game.cc

entity.o: entity.h entity.cc
	$(GCC) -c entity.cc

main: main.o entity.o game.o ceobject.o
	$(GCC) $(LINK) -o main main.o entity.o ceobject.o game.o

clean:
	rm *o
