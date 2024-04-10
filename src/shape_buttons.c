/*
** EPITECH PROJECT, 2024
** shape buttons
** File description:
** buttons
*/

#include "../includes/my.h"
#include "../includes/graphic_buttons.h"

int grass(sfRenderWindow *window, sfEvent event, color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 37 && mouse_pos.x <= 73) &&
            (mouse_pos.y >= 732 && mouse_pos.y <= 771)) {
            sound_grass();
            square(window, color);
        }
    }
    return 0;
}

int nether(sfRenderWindow *window, sfEvent event, color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 89 && mouse_pos.x <= 130) &&
            (mouse_pos.y >= 732 && mouse_pos.y <= 771)) {
            sound_ghast();
            rectangle(window, color);
        }
    }
    return 0;
}

int enderpearl(sfRenderWindow *window, sfEvent event, color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 144 && mouse_pos.x <= 179) &&
            (mouse_pos.y >= 732 && mouse_pos.y <= 771)) {
            sound_enderpearl();
            circle(window, color);
        }
    }
    return 0;
}

int cobblestone(sfRenderWindow *window, sfEvent event, color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 198 && mouse_pos.x <= 236) &&
            (mouse_pos.y >= 732 && mouse_pos.y <= 771)) {
            sound_cobble();
            triangle(window, color);
        }
    }
    return 0;
}
