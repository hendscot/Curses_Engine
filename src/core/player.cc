#include "player.h"
#include "entity.h"
#include "input.h"
namespace CE {
  Player::Player(){

  }

  Player::~Player(){

  }

  void Player::Move(){
    switch(CE::getKey()) {
      case CE::RIGHT:
        if ((x_coord+1) < maxX) x_coord += 5;
        break;
      case CE::LEFT:
        if ((x_coord-1) > 0) x_coord -= 5;
        break;
      case CE::DOWN:
        if ((y_coord+1) < maxY) y_coord += 2;
        break;
      case CE::UP:
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
