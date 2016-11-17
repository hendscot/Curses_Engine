typedef unsigned unint_t;
const int MAXH = 10;
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
  private:
    bool    _act;
    char*   _avtr;
    int     _xPos;
    int     _yPos;
    unint_t _hp;
  };
}
