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

scene.o: scene.h scene.cc
	$(GCC) -c scene.cc

player.o: player.h player.cc
	$(GCC) -c player.cc

enemy.o: enemy.h enemy.cc
	$(GCC) -c enemy.cc

main: main.o entity.o game.o ceobject.o scene.o input.h player.o enemy.o
	$(GCC) $(LINK) -o main main.o entity.o ceobject.o game.o enemy.o player.o scene.o input.h

clean:
	rm *o
