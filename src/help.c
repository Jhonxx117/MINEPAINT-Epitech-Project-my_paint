/*
** EPITECH PROJECT, 2024
** help button
** File description:
** help button
*/

#include "../includes/my.h"

void display_help(sfRenderWindow *window, sfEvent event)
{
    sfSprite *helpgui = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(
    "./image/GUI/help.png", NULL);
    sfVector2f scale = {1, 1.2};
    sfVector2f position = {810, 344};
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);

    sfSprite_setTexture(helpgui, texture, sfTrue);
    sfSprite_setScale(helpgui, scale);
    sfSprite_setPosition(helpgui, position);
    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        if ((mouse_pos.x >= 38 && mouse_pos.x <= 229) &&
            (mouse_pos.y >= 459 && mouse_pos.y <= 492)) {
            sfRenderWindow_drawSprite(window, helpgui, NULL);
            sfRenderWindow_display(window);
        }
    }
}
