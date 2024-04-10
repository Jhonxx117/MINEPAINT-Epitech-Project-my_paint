/*
** EPITECH PROJECT, 2024
** square
** File description:
** e
*/

#include "../../includes/my.h"
#include "../structures/pencil_eraser.h"

int square_events(sfRenderWindow *window, sfEvent *event, event_t *events)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        if (event->type == sfEvtClosed)
            sfRenderWindow_close(window);
        if (event->type == sfEvtMouseButtonPressed
            && event->mouseButton.button == sfMouseLeft)
            events->if_pressed = sfTrue;
        if (event->type == sfEvtMouseButtonReleased
            && event->mouseButton.button == sfMouseLeft)
            events->if_pressed = sfFalse;
        if (events->if_pressed)
            square_drawing(window, events->if_pressed, events->colour,
            events->color);
    }
    return 0;
}

int square_drawing(sfRenderWindow *window, sfBool if_pressed, sfColor colour,
    color_t *color)
{
    sfRectangleShape *square;
    sfVector2f position;
    sfVector2f size;
    sfEvent event;

    size.x = 100;
    size.y = 100;
    position.x = sfMouse_getPositionRenderWindow(window).x;
    position.y = sfMouse_getPositionRenderWindow(window).y;
    if ((if_pressed && position.x >= 280 && position.x <= 1917 &&
        position.y >= 1 && position.y <= 1008)) {
            square = sfRectangleShape_create();
            sfRectangleShape_setSize(square, size);
            sfRectangleShape_setFillColor(square, colour);
            sfRectangleShape_setPosition(square, position);
            sfRenderWindow_drawRectangleShape(window, square, NULL);
            sfRenderWindow_display(window);
    } else
        buttons(window, event, color);
    return 0;
}

void square(sfRenderWindow *window, color_t *color)
{
    event_t events;
    sfEvent event;

    events.if_pressed = sfFalse;
    events.colour = handle_color(color);
    events.color = color;
    while (sfRenderWindow_isOpen(window))
        square_events(window, &event, &events);
}
