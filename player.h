class Entity;
namespace CE{
  class Player: public Entity{
  public:
    Player();
    ~Player();
    void Move();
    void Shoot();
  private:
  };
}
