#include "game.h"
int main (int argc, char* argv[]) {

  CE::Game* spaceBattle = new CE::Game;

  spaceBattle->Run();

  delete spaceBattle;

  return 1;
}
