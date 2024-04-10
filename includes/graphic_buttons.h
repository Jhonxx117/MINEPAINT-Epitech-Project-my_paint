/*
** EPITECH PROJECT, 2024
** incluall
** File description:
** e
*/

#include "./my.h"
#pragma once

struct button_s {
    sfRectangleShape *rect;
    sfBool (*is_clicked) (struct button_s *, sfMouseButtonEvent *);
    sfBool (*is_hover) (struct button_s *, sfMouseMoveEvent *);
};
