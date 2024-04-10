/*
** EPITECH PROJECT, 2024
** bottom_buttons
** File description:
** e
*/

#include "../includes/my.h"

int button_quit_color_blue(sfRenderWindow *window, sfEvent event,
    color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 0 && mouse_pos.x <= 40) &&
            (mouse_pos.y >= 990 && mouse_pos.y <= 1010))
            sfRenderWindow_close(window);
        if ((mouse_pos.x >= 37 && mouse_pos.x <= 71) &&
            (mouse_pos.y >= 861 && mouse_pos.y <= 907)) {
            sound_pop();
            color_blue(color);
        }
    }
    return 0;
}

int button_color_purple_green(sfRenderWindow *window, sfEvent event,
    color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 91 && mouse_pos.x <= 129) &&
            (mouse_pos.y >= 859 && mouse_pos.y <= 902)) {
            sound_pop();
            color_purple(color);
        }
        if ((mouse_pos.x >= 145 && mouse_pos.x <= 182) &&
            (mouse_pos.y >= 859 && mouse_pos.y <= 902)) {
            sound_pop();
            color_green(color);
        }
    }
    return 0;
}

int button_color_yellow_black(sfRenderWindow *window, sfEvent event,
    color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 200 && mouse_pos.x <= 235) &&
            (mouse_pos.y >= 865 && mouse_pos.y <= 902)) {
            sound_pop();
            color_yellow(color);
        }
        if ((mouse_pos.x >= 35 && mouse_pos.x <= 76) &&
            (mouse_pos.y >= 928 && mouse_pos.y <= 970)) {
            sound_pop();
            color_black(color);
        }
    }
    return 0;
}

int button_color_red_orange(sfRenderWindow *window, sfEvent event,
    color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 90 && mouse_pos.x <= 128) &&
            (mouse_pos.y >= 929 && mouse_pos.y <= 970)) {
            sound_pop();
            color_red(color);
        }
        if ((mouse_pos.x >= 144 && mouse_pos.x <= 181) &&
            (mouse_pos.y >= 931 && mouse_pos.y <= 970)) {
            sound_pop();
            color_orange(color);
        }
    }
    return 0;
}

int button_color_pink(sfRenderWindow *window, sfEvent event,
    color_t *color)
{
    sfView *view = sfView_create();
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        sfRenderWindow_mapPixelToCoords(window, mouse_pos, view);
        mouse_pos.x = sfMouse_getPositionRenderWindow(window).x;
        mouse_pos.y = sfMouse_getPositionRenderWindow(window).y;
        if ((mouse_pos.x >= 199 && mouse_pos.x <= 239) &&
            (mouse_pos.y >= 930 && mouse_pos.y <= 970)) {
            sound_pop();
            color_pink(color);
        }
    }
    return 0;
}
