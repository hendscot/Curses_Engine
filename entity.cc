#include "entity.h"

Entity::Entity(){
  _hp   = MAXH;
  _avtr = (char*)"^";
  _act  = true;
}

Entity::~Entity(){

}

char* Entity::getAvatar() {
  return this->_avtr;
}

void Entity::setAvatar(char* avtr) {
  _avtr = avtr;
  return;
}

void Entity::setX(int newX){
  _xPos = newX;
}

void Entity::setY(int newY){
  _yPos = newY;
}

int Entity::getX(){
  return _xPos;
}

int Entity::getY(){
  return _yPos;
}

bool Entity::isActive(){
  return _act;
}

void Entity::setInactive() {
  _act = false;
}
