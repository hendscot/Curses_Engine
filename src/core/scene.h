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
    void SetMaxXY(int, int);
  private:
    unsigned lives;
    unsigned score;
    int maxX, maxY;
    Player*  actor;
    Enemy*   enemy;
  };
}
#endif //SCENE_H
