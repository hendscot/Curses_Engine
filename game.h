#define DELAY 30000
#define NUMEN 10
typedef unsigned uint_t;
class Entity;
class Game{
public:
  Game();
  ~Game();

  bool windowShouldClose();
  void Update();
  int  getX();
  int  getY();

private:
  uint_t  g_Score;
  int     time;
  int     x_coord;
  int     y_coord;
  int     key;
  int     maxX;
  int     maxY;
  Entity* enemies;
  int     enSize;
  void    MoveAI();
  int     Input();
  void    Init();
  void    Shoot();
  void    Move();

};
