#include "scene.h"
#include "input.h"
#include "ncurses.h"

namespace CE {
  Scene::Scene(){
    lives = 10;
    score = 0;
    actor = new Player;
    actor->setXY((10), (10));
  }

  Scene::~Scene(){

  }

  void Scene::Poll(){
    actor->Move(maxX, maxY);
    /*for (int i = 0; i < MAXEN; i++){
      en[i]->Move();
    }*/
  }
  void Scene::Draw(){
    Poll();
    mvprintw(actor->getY(), actor->getX(), actor->getAvatar());
    /*for (int i = 0; i < MAXEN; i++){
      mvprintw(en[i]->getY(), en[i]->getX(), en[i]->getAvatar());
    }*/
  }
}
