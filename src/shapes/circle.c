/*
** EPITECH PROJECT, 2024
** circle
** File description:
** e
*/

#include "../../includes/my.h"
#include "../structures/pencil_eraser.h"

int circle_events(sfRenderWindow *window, sfEvent *event, event_t *events)
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
            circle_drawing(window, events->if_pressed, events->colour,
            events->color);
    }
    return 0;
}

int circle_drawing(sfRenderWindow *window, sfBool if_pressed, sfColor colour,
    color_t *color)
{
    sfCircleShape *circle;
    sfVector2f position;
    sfEvent event;

    position.x = sfMouse_getPositionRenderWindow(window).x;
    position.y = sfMouse_getPositionRenderWindow(window).y;
    if ((if_pressed && position.x >= 280 && position.x <= 1917 &&
        position.y >= 1 && position.y <= 1008)) {
            circle = sfCircleShape_create();
            sfCircleShape_setRadius(circle, 50);
            sfCircleShape_setFillColor(circle, colour);
            sfCircleShape_setPosition(circle, position);
            sfRenderWindow_drawCircleShape(window, circle, NULL);
            sfRenderWindow_display(window);
    } else
        buttons(window, event, color);
    return 0;
}

void circle(sfRenderWindow *window, color_t *color)
{
    event_t events;
    sfEvent event;

    events.if_pressed = sfFalse;
    events.colour = handle_color(color);
    events.color = color;
    while (sfRenderWindow_isOpen(window))
        circle_events(window, &event, &events);
}
