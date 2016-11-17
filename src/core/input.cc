#include "input.h"
#include <ncurses.h>

namespace CE{
  UP    = KEY_UP;
  LEFT  = KEY_LEFT;
  DOWN  = KEY_DOWN;
  RIGHT = KEY_RIGHT;
  int getKey(){
    return getch();
  }
}
