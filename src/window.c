/*
** EPITECH PROJECT, 2024
** window
** File description:
** e
*/

#include "../includes/my.h"

void other_while(sfRenderWindow *window, sfEvent event, color_t *color)
{
    while (sfRenderWindow_pollEvent(window, &event)) {
        analyse_events(window, event, color);
        if ((event.type == sfEvtKeyPressed) && (event.key.code == sfKeyEscape))
            sfRenderWindow_close(window);
    }
}

void window_gesture(sfRenderWindow *window, sfEvent event, color_t *color)
{
    sfSprite *gui = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile("./image/GUI/gui.png", NULL);
    sfVector2f scale = { 1.35, 1.523 };

    sfSprite_setTexture(gui, texture, sfTrue);
    sfSprite_setScale(gui, scale);
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfWhite);
        sfRenderWindow_drawSprite(window, gui, NULL);
        sfRenderWindow_display(window);
        other_while(window, event, color);
    }
    sfRenderWindow_destroy(window);
}
