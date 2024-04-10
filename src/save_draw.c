/*
** EPITECH PROJECT, 2024
** save drawings
** File description:
** save drawings
*/

#include "../includes/my.h"

void save_drawings(sfRenderWindow *window, sfEvent event)
{
    sfVector2i mouse_pos = sfMouse_getPositionRenderWindow(window);
    sfVector2u windowSize = sfRenderWindow_getSize(window);
    sfTexture *texture = sfTexture_create(windowSize.x, windowSize.y);
    sfImage *screenshot;

    if (event.type == sfEvtMouseButtonPressed &&
        event.mouseButton.button == sfMouseLeft) {
        if ((mouse_pos.x >= 40 && mouse_pos.x <= 229) &&
            (mouse_pos.y >= 422 && mouse_pos.y <= 458)) {
            sfTexture_updateFromRenderWindow(texture, window, 0, 0);
            screenshot = sfTexture_copyToImage(texture);
            sfImage_saveToFile(screenshot,
            "./image/saved-images/screenshot.png");
            sfTexture_destroy(texture);
            sfImage_destroy(screenshot);
        }
    }
}
