/*
** EPITECH PROJECT, 2023
** my_Float.c
** File description:
** e
*/

#include "../my.h"

int my_float2(double nb)
{
    int int_part = (int)nb;
    int fractional = nb * 1000000 - int_part * 1000000;

    my_put_nbr(int_part);
    my_putchar('.');
    my_put_nbr(fractional);
    my_putstr("E+0");
    return 0;
}
