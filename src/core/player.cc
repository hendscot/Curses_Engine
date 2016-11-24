#include "player.h"
#include "input.h"
namespace CE {
  Player::Player(){

  }

  Player::~Player(){

  }

  void Player::Move(int ex, int ey){
    switch(CE::getKey()) {
      case RIGHT:
        if ((_xPos+1) < _maxX) _xPos += 5;
        break;
      case LEFT:
        if ((_xPos-1) > 0) _xPos -= 5;
        break;
      case DOWN:
        if ((_yPos+1) < _maxY) _yPos += 2;
        break;
      case UP:
        if ((_yPos-1) > 0) _yPos -= 2;
        break;
      case (' '):
        Shoot(ex, ey);
        break;
    }
  }

  void Player::Shoot (){
    int x, y;
    x = _xPos;
    y = _yPos;
    while ((y - 1) >= 0) {
      mvprintw(y, x, "!");
      refresh();
      --y;
    }
  }
}
