/*
** EPITECH PROJECT, 2024
** color_gesture
** File description:
** e
*/

#include "./structures/color_shape.h"

void init_colors(color_t *color)
{
    color->blue = 0;
    color->purple = 0;
    color->green = 0;
    color->yellow = 0;
    color->black = 0;
    color->red = 0;
    color->orange = 0;
    color->pink = 0;
}

void init_shapes(shape_t *shape)
{
    shape->circle = 0;
    shape->triangle = 0;
    shape->square = 0;
    shape->rectangle = 0;
}

void init_tools(tool_t *tool)
{
    tool->cursor = 0;
    tool->pencil = 0;
    tool->bucket = 0;
    tool->eraser = 0;
}
