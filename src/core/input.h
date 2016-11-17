#ifndef INPUT_H
#define INPUT_H
#include <ncurses.h>
namespace CE{
  static int getKey(){
    return getch();
  }
  const int UP    = KEY_UP;
  const int LEFT  = KEY_LEFT;
  const int DOWN  = KEY_DOWN;
  const int RIGHT = KEY_RIGHT;
}
#endif // INPUT_H
