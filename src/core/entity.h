#ifndef ENTITY_H
#define ENTITY_H
typedef unsigned unint_t;
const int MAXHP = 10;
namespace CE{
  class Entity {
  public:
    Entity();
    ~Entity();
    char* getAvatar();
    void  setAvatar(char*);
    void  setX(int);
    void  setY(int);
    int   getX();
    int   getY();
    bool  isActive();
    void  setInactive();
    void  setXY(int,int);
    void  SetMaxXY(int, int);
  protected:
    bool    _act;
    char*   _avtr;
    int     _xPos;
    int     _yPos;
    int     _maxX;
    int     _maxY;
    unint_t _hp;
  };
}
#endif // ENTITY_H
