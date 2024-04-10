/*
** EPITECH PROJECT, 2023
** my_expomin.c
** File description:
** e
*/

#include "../my.h"

double my_expomin_plus(double nb)
{
    int co = 0;

    while (nb >= 10) {
        nb = nb / 10;
        co++;
    }
    my_float(nb);
    my_putstr("e+");
    my_put_nbr(co);
    return (0);
}

double my_expomin_minus(double nb)
{
    int co = 0;

    while (nb < 1 && nb > 0) {
        nb = nb * 10;
        co++;
    }
    my_float(nb);
    my_putstr("e-");
    my_put_nbr(co);
    return (0);
}

double my_expomin(double nb)
{
    if (nb > 10) {
        my_expomin_plus(nb);
    }
    if (nb < 1 && nb > 0) {
        my_expomin_minus(nb);
    }
    if (nb < 10 && nb > 1) {
        my_float(nb);
        my_putstr("e+");
        my_put_nbr(0);
    }
    return 0;
}
