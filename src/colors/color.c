/*
** EPITECH PROJECT, 2024
** color
** File description:
** e
*/

#include "../../includes/my.h"

void color_blue(color_t *color)
{
    color->blue = 1;
    color->purple = 0;
    color->green = 0;
    color->yellow = 0;
    color->black = 0;
    color->red = 0;
    color->orange = 0;
    color->pink = 0;
}

void color_purple(color_t *color)
{
    color->blue = 0;
    color->purple = 1;
    color->green = 0;
    color->yellow = 0;
    color->black = 0;
    color->red = 0;
    color->orange = 0;
    color->pink = 0;
}

void color_green(color_t *color)
{
    color->blue = 0;
    color->purple = 0;
    color->green = 1;
    color->yellow = 0;
    color->black = 0;
    color->red = 0;
    color->orange = 0;
    color->pink = 0;
}

void color_yellow(color_t *color)
{
    color->blue = 0;
    color->purple = 0;
    color->green = 0;
    color->yellow = 1;
    color->black = 0;
    color->red = 0;
    color->orange = 0;
    color->pink = 0;
}

void color_black(color_t *color)
{
    color->blue = 0;
    color->purple = 0;
    color->green = 0;
    color->yellow = 0;
    color->black = 1;
    color->red = 0;
    color->orange = 0;
    color->pink = 0;
}
