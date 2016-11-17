#ifndef PLAYER_H
#define PLAYER_H
#include "entity.h"
namespace CE{
  class Player: public Entity{
  public:
    Player();
    ~Player();
    void Move(int, int);
    void Shoot();
  private:
  };
}
#endif // PLAYER_H
