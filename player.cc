#include "player.h"
#include "entity.h"
#include <ncurses.h>
namespace CE {
  Player::Player(){

  }

  Player::~Player(){

  }

  void Player::Game::Move(){
    switch(Input()) {
      case KEY_RIGHT:
        if ((x_coord+1) < maxX) x_coord += 5;
        break;
      case KEY_LEFT:
        if ((x_coord-1) > 0) x_coord -= 5;
        break;
      case KEY_DOWN:
        if ((y_coord+1) < maxY) y_coord += 2;
        break;
      case KEY_UP:
        if ((y_coord-1) > 0) y_coord -= 2;
        break;
      case (' '):
        Shoot();
        break;
    }
  }

  void Player::Shoot (){
    int x, y;
    x = x_coord;
    y = y_coord;
    while ((y - 1) >= 0) {
      mvprintw(y, x, "!");
      refresh();
      --y;
    }
  }
}
