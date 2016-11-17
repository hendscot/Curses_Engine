#ifndef SCENE_H
#define SCENE_H
#include "player.h"
#include "enemy.h"
#define MAXEN 10
namespace CE {
  class Scene {
  public:
    Scene();
    ~Scene();

    void Draw();
    void Poll();
  private:
    unsigned lives;
    unsigned score;
    int maxX, maxY;
    Player*  actor;
    Enemy*   en[MAXEN];
  };
}
#endif //SCENE_H
