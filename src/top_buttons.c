/*
** EPITECH PROJECT, 2024
** top buttons
** File description:
** top buttons
*/

#include "../includes/my.h"
#include "../includes/graphic_buttons.h"

int file_save_help(sfRenderWindow *window, sfEvent event)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 39 && mouse_pos.x <= 228) &&
            (mouse_pos.y >= 384 && mouse_pos.y <= 491)) {
            sound_click();
        }
    }
    return 0;
}

int cursor(sfRenderWindow *window, sfEvent event, color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 35 && mouse_pos.x <= 72) &&
            (mouse_pos.y >= 598 && mouse_pos.y <= 641)) {
            sound_click();
            cursor_tool(window, color);
        }
    }
    return 0;
}

int brush(sfRenderWindow *window, sfEvent event, color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 91 && mouse_pos.x <= 128) &&
            (mouse_pos.y >= 597 && mouse_pos.y <= 642)) {
            sound_click();
            draw(window, color);
        }
    }
    return 0;
}

int bucket(sfRenderWindow *window, sfEvent event)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 142 && mouse_pos.x <= 181) &&
            (mouse_pos.y >= 597 && mouse_pos.y <= 642)) {
            sound_bucket();
        }
    }
    return 0;
}

int eraser(sfRenderWindow *window, sfEvent event, color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 198 && mouse_pos.x <= 237) &&
            (mouse_pos.y >= 597 && mouse_pos.y <= 642)) {
            sound_eraser();
            eraser_tool(window, color);
        }
    }
    return 0;
}
