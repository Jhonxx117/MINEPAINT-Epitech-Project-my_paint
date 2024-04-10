/*
** EPITECH PROJECT, 2023
** my_expomaj.c
** File description:
** e
*/

#include "../my.h"

double my_expomaj_plus(double nb)
{
    int co = 0;

    while (nb >= 10) {
        nb = nb / 10;
        co++;
    }
    my_float(nb);
    my_putstr("E+");
    my_put_nbr(co);
    return (0);
}

double my_expomaj_minus(double nb)
{
    int co = 0;

    while (nb < 1 && nb > 0) {
        nb = nb * 10;
        co++;
    }
    my_float(nb);
    my_putstr("E-");
    my_put_nbr(co);
    return (0);
}

double my_expomaj(double nb)
{
    if (nb > 10) {
        my_expomaj_plus(nb);
    }
    if (nb < 1 && nb > 0) {
        my_expomaj_minus(nb);
    }
    if (nb < 10 && nb > 1) {
        my_float(nb);
        my_putstr("E+");
        my_put_nbr(0);
    }
    return 0;
}
