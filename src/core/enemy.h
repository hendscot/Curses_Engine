#ifndef ENEMY_H
#define ENEMY_H
#include "entity.h"
namespace CE{
  class Enemy: public Entity {
  public:
    Enemy();
    ~Enemy();

    void Move();

  private:
    static unsigned time;
  };
}

#endif
