/*
** EPITECH PROJECT, 2024
** gesture
** File description:
** e
*/

#include "../includes/my.h"

void reparo(sfRenderWindow* window, sfEvent event)
{
    if (event.type == sfEvtClosed)
        sfRenderWindow_close(window);
}

void manage_mouse_click(sfRenderWindow *window, sfEvent event)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonReleased)
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
    else if (event.type == sfEvtMouseButtonPressed &&
            event.mouseButton.button == sfMouseLeft) {
            mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
            mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
            my_printf("Mouse x=%d y=%d\n", mouse_pos.x, mouse_pos.y);
        }
}

int buttons(sfRenderWindow *window, sfEvent event, color_t *color)
{
    button_quit_color_blue(window, event, color);
    button_color_purple_green(window, event, color);
    button_color_yellow_black(window, event, color);
    button_color_red_orange(window, event, color);
    button_color_pink(window, event, color);
    file_save_help(window, event);
    bucket(window, event);
    cursor(window, event, color);
    brush(window, event, color);
    eraser(window, event, color);
    grass(window, event, color);
    nether(window, event, color);
    enderpearl(window, event, color);
    cobblestone(window, event, color);
    minecraft(window, event);
    steve(window, event);
    save_drawings(window, event);
    display_help(window, event);
    return 0;
}

void analyse_events(sfRenderWindow *window, sfEvent event, color_t *color)
{
    reparo(window, event);
    manage_mouse_click(window, event);
    buttons(window, event, color);
}
