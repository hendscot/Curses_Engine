#include <ncurses.h>
#include <unistd.h>
#include <sys/time.h>
#include "entity.h"
#include "game.h"

namespace CE {
  Game::Game(){
    g_Score = 0;
    enSize  = 0;
    // initalize ncurses
    this->Init();
    // set print coords TODO
    x_coord = (maxX >> 1);
    y_coord = ((maxY >> 1));
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
    Scene->Draw();
    refresh();
    usleep(DELAY);
  }
}
