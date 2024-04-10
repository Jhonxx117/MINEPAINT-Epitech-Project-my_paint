/*
** EPITECH PROJECT, 2024
** rectangle
** File description:
** e
*/

#include "../../includes/my.h"
#include "../structures/pencil_eraser.h"

int rectangle_events(sfRenderWindow *window, sfEvent *event, event_t *events)
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
            rectangle_drawing(window, events->if_pressed, events->colour,
            events->color);
    }
    return 0;
}

int rectangle_drawing(sfRenderWindow *window, sfBool if_pressed,
    sfColor colour, color_t *color)
{
    sfRectangleShape *rectangle;
    sfVector2f position;
    sfVector2f size;
    sfEvent event;

    size.x = 155;
    size.y = 95;
    position.x = sfMouse_getPositionRenderWindow(window).x;
    position.y = sfMouse_getPositionRenderWindow(window).y;
    if ((if_pressed && position.x >= 280 && position.x <= 1917 &&
        position.y >= 1 && position.y <= 1008)) {
        rectangle = sfRectangleShape_create();
            sfRectangleShape_setSize(rectangle, size);
            sfRectangleShape_setFillColor(rectangle, colour);
            sfRectangleShape_setPosition(rectangle, position);
            sfRenderWindow_drawRectangleShape(window, rectangle, NULL);
            sfRenderWindow_display(window);
    } else
        buttons(window, event, color);
    return 0;
}

void rectangle(sfRenderWindow *window, color_t *color)
{
    event_t events;
    sfEvent event;

    events.if_pressed = sfFalse;
    events.colour = handle_color(color);
    events.color = color;
    while (sfRenderWindow_isOpen(window))
        rectangle_events(window, &event, &events);
}
