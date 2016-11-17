#include <ncurses.h>
#include <unistd.h>
#include <sys/time.h>
#include "entity.h"
#include "game.h"

namespace CE {
  Game::Game(){
    // initalize ncurses
    this->Init();
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

  bool Game::windowShouldClose(){
    if (key == 27) {
      endwin();
      return 1;
    }
  }

  void Game::Update() {
    clear();
    Move();
    scene->Draw();
    refresh();
    usleep(DELAY);
  }

  int Game::getMaxX(){
    return maxX;
  }

  int Game::getMaxY(){
    return maxY;
  }
}
