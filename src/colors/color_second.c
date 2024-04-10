/*
** EPITECH PROJECT, 2024
** color2
** File description:
** e
*/

#include "../../includes/my.h"

void color_red(color_t *color)
{
    color->blue = 0;
    color->purple = 0;
    color->green = 0;
    color->yellow = 0;
    color->black = 0;
    color->red = 1;
    color->orange = 0;
    color->pink = 0;
}

void color_orange(color_t *color)
{
    color->blue = 0;
    color->purple = 0;
    color->green = 0;
    color->yellow = 0;
    color->black = 0;
    color->red = 0;
    color->orange = 1;
    color->pink = 0;
}

void color_pink(color_t *color)
{
    color->blue = 0;
    color->purple = 1;
    color->green = 0;
    color->yellow = 0;
    color->black = 0;
    color->red = 0;
    color->orange = 0;
    color->pink = 1;
}
