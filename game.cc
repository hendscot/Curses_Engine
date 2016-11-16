#include <ncurses.h>
#include <unistd.h>
#include <sys/time.h>
#include "entity.h"
#include "game.h"

Game::Game(){
  g_Score = 0;
  enSize  = 0;
  // initalize ncurses
  this->Init();
  // set print coords TODO
  x_coord = (maxX >> 1);
  y_coord = ((maxY >> 1));
  //enemies = new Entity[NUMEN];
  /*for (int i = 0; i < NUMEN; i++) {
    enemies[i].setAvatar("Z");
    enemies[i].setX(3);
    enemies[i].setY(7);
    ++enSize;
  }*
}

Game::~Game(){

}

void Game::Init(){
  // initialize game window
  initscr();
  // acquire screen size
  getmaxyx(stdscr, maxY, maxX);
  // set desired ncurses pref.
  cbreak();
  noecho();
  curs_set(FALSE);
  keypad(stdscr, TRUE);
  nodelay(stdscr, TRUE);
}

int Game::getX(){
  return x_coord;
}

int Game::getY(){
  return y_coord;
}

bool Game::windowShouldClose(){
  if (key == 27) {
    endwin();
    return 1;
  }
}

int Game::Input(){
  return key = getch();
}

void Game::Update() {
  clear();
  Move();
  //MoveAI();
  mvprintw(y_coord, x_coord, "^");
  refresh();
  usleep(DELAY);
}

void Game::Shoot (){
  int x, y;
  x = x_coord;
  y = y_coord;
  while ((y - 1) >= 0) {
    mvprintw(y, x, "!");
    refresh();
    --y;
  }
}

void Game::Move(){
  switch(Input()) {
    case KEY_RIGHT:
      if ((x_coord+1) < maxX) x_coord += 5;
      break;
    case KEY_LEFT:
      if ((x_coord-1) > 0) x_coord -= 5;
      break;
    case KEY_DOWN:
      if ((y_coord+1) < maxY) y_coord += 2;
      break;
    case KEY_UP:
      if ((y_coord-1) > 0) y_coord -= 2;
      break;
    case (' '):
      Shoot();
      break;
  }
}

void Game::MoveAI(){
  for (int i = 0; i < enSize; i++){
    clear();
    enemies[i].setY(enemies[i].getY() + 1);
    mvprintw(enemies[i].getY(), enemies[i].getX(), enemies[i].getAvatar());
    refresh();
  }
}
