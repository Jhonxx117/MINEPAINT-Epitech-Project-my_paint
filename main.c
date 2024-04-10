/*
** EPITECH PROJECT, 2024
** main
** File description:
** e
*/

#include "./includes/my.h"

int main(int ac, char **av)
{
    sfRenderWindow *window;
    sfVideoMode video = {1920, 1080, 64};
    sfEvent event;
    color_t color;
    shape_t shape;

    if (ac == 0 && av[0][0] == '\0')
        return 84;
    window = sfRenderWindow_create(video,
    "MinePaint - Linux Edition", sfDefaultStyle, NULL);
    window_gesture(window, event, &color);
    init_colors(&color);
    init_shapes(&shape);
    return 0;
}
