#include "entity.h"
#include "game.h"
int main (int argc, char* argv[]) {
  Game* game = new Game;

  while (!game->windowShouldClose()) {
    game->Update();
  }

  return 1;
}
