#include <stdio.h>
#include <string.h>
#include <ncurses.h>

/* 
 * some notes
 *
 * start off by parsing given .map file
 * split memory addresses into blocks based on size
 *
 * for example
 * [ 0x08000000 ] -> ISR_VECTOR
 *
 */

WINDOW *create_dullmap(int height, int width, int y, int x) {
  WINDOW *dullmap_window;

  dullmap_window = newwin(height, width, y, x);
  box(dullmap_window, 0, 0);
  wrefresh(dullmap_window);

  if (dullmap_window == NULL) {
    return NULL;
  }
  
  return dullmap_window;
}

int destroy_dullmap(WINDOW *window) {

  return 0;
}

int main(int argc, char *argv[]) {
  initscr();
  printw("Hello World!");
  refresh();
  getch();
  endwin();

  return 0;
}
