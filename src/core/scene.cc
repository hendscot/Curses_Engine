#include "scene.h"
#include "input.h"
#include "ncurses.h"

namespace CE {
  Scene::Scene(){
    lives = 10;
    score = 0;
    actor = new Player;
    actor->setXY((10), (10));
    enemy = new Enemy;
    enemy->setXY(0, 5);
  }

  Scene::~Scene(){

  }

  void Scene::Poll(){
    actor->Move(maxX, maxY);
    enemy->Move();
  }
  void Scene::Draw(){
    Poll();
    mvprintw(actor->getY(), actor->getX(), actor->getAvatar());
    mvprintw(enemy->getY(), enemy->getX(), enemy->getAvatar());
    /*for (int i = 0; i < MAXEN; i++){
      mvprintw(en[i]->getY(), en[i]->getX(), en[i]->getAvatar());
    }*/
  }

  void Scene::SetMaxXY(int x, int y){
    maxX = x;
    maxY = y;
    actor->SetMaxXY(x, y);
    enemy->SetMaxXY(x, y)
  }
}
