#include <ncurses.h>
#include <unistd.h>
#include <sys/time.h>
#include "entity.h"
#include "game.h"
#include "scene.h"

using namespace CE;

namespace CE {
  Game::Game(){
    scene = new Scene;
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
    scene->SetMaxXY(maxX, maxY);
    // set desired ncurses pref.
    cbreak();
    noecho();
    curs_set(FALSE);
    keypad(stdscr, TRUE);
    nodelay(stdscr, TRUE);
  }

  bool Game::windowShouldClose(){

      return 0;

  }

  void Game::Run(){
    while(!windowShouldClose()){
      Update();
    }
  }

  void Game::Update() {
    clear();
    scene->Draw();
    refresh();
    usleep(DELAY);
  }
}
