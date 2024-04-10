/*
** EPITECH PROJECT, 2024
** cursor
** File description:
** e
*/

#include "../includes/my.h"
#include "./structures/pencil_eraser.h"

int cursor_events(sfRenderWindow *window, sfEvent *event, event_t *events)
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
            cursor_drawing(window, events->if_pressed, events->colour,
            events->color);
    }
    return 0;
}

int cursor_drawing(sfRenderWindow *window, sfBool if_pressed, sfColor colour,
    color_t *color)
{
    sfCircleShape *circle;
    sfVector2f position;
    sfEvent event;

    position.x = sfMouse_getPositionRenderWindow(window).x;
    position.y = sfMouse_getPositionRenderWindow(window).y;
    if (if_pressed && (position.x >= 280 && position.x <= 1917 &&
        position.y >= 1 && position.y <= 1008)) {
            circle = sfCircleShape_create();
            sfCircleShape_setRadius(circle, 5);
            sfCircleShape_setFillColor(circle, colour);
            sfCircleShape_setPosition(circle, position);
            sfRenderWindow_drawCircleShape(window, circle, NULL);
            sfRenderWindow_display(window);
    } else
        buttons(window, event, color);
    return 0;
}

void cursor_tool(sfRenderWindow *window, color_t *color)
{
    event_t events;
    sfEvent event;

    events.if_pressed = sfFalse;
    events.colour = sfTransparent;
    events.color = color;
    while (sfRenderWindow_isOpen(window))
        cursor_events(window, &event, &events);
}
