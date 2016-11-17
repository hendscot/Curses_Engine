#ifndef SCENE_H
#define SCENE_H
class Player;
class Enemy;
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
    int oriX, oriY;
    Player*  actor;
    Enemy*   en[MAXEN];
  };
}
#endif //SCENE_H
