/*
** EPITECH PROJECT, 2023
** my_decimal
** File description:
** e
*/

#include "../my.h"

unsigned int my_decimal(int nb)
{
    if (nb > 0) {
        my_decimal(nb / 10);
        my_putchar((nb % 10) + '0');
    }
    return 0;
}
