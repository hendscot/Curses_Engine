#ifndef ENTITY_H
#define ENTITY_H
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
    bool    act_;
    char*   avtr_;
    int     xPos_;
    int     yPos_;
    int     maxX_;
    int     maxY_;
    int     hp_;
  };
}
#endif // ENTITY_H
