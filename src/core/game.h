#ifndef GAME_H
#define GAME_H
#define DELAY 30000
#define NUMEN 10
typedef unsigned uint_t;
class Scene;
class CE {
  class Game{
  public:
    Game();
    ~Game();

    bool windowShouldClose();
    void Update();
    int getMaxX();
    int getMaxY();

  private:
    int     maxX;
    int     maxY;
    Scene*  scene;
    void    Init();
  };
}
#endif //GAME_H
