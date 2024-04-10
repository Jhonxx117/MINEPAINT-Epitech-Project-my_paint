/*
** EPITECH PROJECT, 2024
** handle_colors
** File description:
** e
*/

#include "../includes/my.h"

sfColor handle_color(color_t *color)
{
    sfColor colour = sfBlack;

    if (color->blue == 1)
        colour = sfBlue;
    if (color->purple == 1)
        colour = sfColor_fromRGB(176, 17, 225);
    if (color->green == 1)
        colour = sfGreen;
    if (color->yellow == 1)
        colour = sfYellow;
    if (color->red == 1)
        colour = sfRed;
    if (color->orange == 1)
        colour = sfColor_fromRGB(255, 165, 0);
    if (color->pink == 1)
        colour = sfColor_fromRGB(255, 153, 204);
    if (color->black == 1)
        colour = sfBlack;
    return colour;
}
