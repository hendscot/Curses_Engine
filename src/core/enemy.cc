#include "enemy.h"

namespace CE{
  unsigned Enemy::time = 0;
  Enemy::Enemy(){

  }

  Enemy::~Enemy(){

  }

  void Enemy::Move(){
    ++time;
    if (time / 2 + 5 == 16) ++_yPos;
    if (time >= 100) time = 1;
  }
}
