#include "enemy.h"

namespace CE{
  Enemy::Enemy(){

  }

  Enemy::~Enemy(){

  }

  void Enemy::Move(){
    ++_yPos;
  }
}
