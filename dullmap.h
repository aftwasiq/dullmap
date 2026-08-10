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
 * @param height Signifies the window height
 * @param width Signifies the window width
 * @param x The x coordinate we begin with
 * @param y The y coordinate we begin with
 *
 * @retval dullmap An ncurses WINDOW struct
 *
 */

WINDOW *create_dullmap(int height, int width, int y, int x);

/*
 * @brief Destroys dullmap window
 *
 * @param window The dullmap WINDOW struct to destroy
 *
 * @retval 0 Failure
 * @retval 1 Success
 *
 */

int destroy_dullmap(WINDOW *window);


#ifdef __cplusplus
}
#endif

#endif /* _DULLMAP_H */
