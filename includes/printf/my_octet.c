/*
** EPITECH PROJECT, 2023
** my_octet.c
** File description:
** e
*/

#include "../my.h"

unsigned int my_octet(int nb)
{
    if (nb > 0) {
        my_octet(nb / 8);
        my_putchar((nb % 8) + '0');
    }
    return 0;
}
