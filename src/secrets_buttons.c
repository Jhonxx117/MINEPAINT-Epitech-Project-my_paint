/*
** EPITECH PROJECT, 2024
** secret buttons
** File description:
** secret buttons
*/

#include "../includes/my.h"
#include "../includes/graphic_buttons.h"

int minecraft(sfRenderWindow *window, sfEvent event)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 8 && mouse_pos.x <= 254) &&
            (mouse_pos.y >= 22 && mouse_pos.y <= 141)) {
            sound_c418();
        }
    }
    return 0;
}

int steve(sfRenderWindow *window, sfEvent event)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 179 && mouse_pos.x <= 204) &&
            (mouse_pos.y >= 219 && mouse_pos.y <= 317)) {
            sound_oh();
        }
    }
    return 0;
}
