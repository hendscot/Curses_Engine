#include "scene.h"
#include "ncurses.h"

namespace CE {
  Scene::Scene(){
    lives = 10;
    score = 0;
    actor = new Player;
    getmaxyx(oriY, oriX, stdscr);
    actor->setXY((oriX >> 1), (oriY >> 1))
    for (int i = 0; i < MAXEN; i++){
      en[i] = new Enemy;
      en[i]->setXY((((oriX - oriX) + 1),((oriY - oriY) + 1)))
    }
  }

  Scene::~Scene(){

  }

  void Scene::Poll(){
    actor->Move();
    for (int i = 0; i < MAXEN; i++){
      en[i]->Move();
    }
  }
  void Scene::Draw(){
    Poll();
    mvprintw(actor->getY(), actor->getX(), actor->getAvatar());
    for (int i = 0; i < MAXEN; i++){
      mvprintw(en[i]->getY(), en[i]->getX, en[i]->getAvatar());
    }
  }
}
