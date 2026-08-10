#ifndef _DULLMAP_H
#define _DULLMAP_H

#include <ncurses.h>
#include <stdio.h>
#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

/*
 * @brief Creates new dullmap window
 *
 * @param height signifies the window height
 * @param width signifies the window width
 * @param x is the x coordinate we begin with
 * @param y is the y coordinate we begin with
 *
 * @retval dullmap as an ncurses WINDOW struct
 *
 */

WINDOW *create_dullmap(int height, int width, int y, int x);

/*
 * @brief Destroys dullmap window
 *
 * @param window is the dullmap WINDOW struct to destroy
 *
 * @retval 0 on failure
 * @retval 1 on success
 *
 */

int destroy_dullmap(WINDOW *window);


#ifdef __cplusplus
}
#endif

#endif /* _DULLMAP_H */
