/*
** EPITECH PROJECT, 2024
** button
** File description:
** e
*/

#include "../includes/my.h"
#include "../includes/graphic_buttons.h"

struct button_s *init_button(sfVector2f position, sfVector2f size)
{
    struct button_s *button = malloc(sizeof(struct button_s));

    button->rect = sfRectangleShape_create();
    sfRectangleShape_setSize(button->rect, size);
    sfRectangleShape_setOutlineColor(button->rect, sfRed);
    sfRectangleShape_setOutlineThickness(button->rect, 3);
    sfRectangleShape_setFillColor(button->rect, sfTransparent);
    sfRectangleShape_setPosition(button->rect, position);
    return (button);
}

sfBool is_button_clicked(struct button_s *, sfMouseButtonEvent *)
{
    return 0;
}
