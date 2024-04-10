/*
** EPITECH PROJECT, 2023
** my_hexamin
** File description:
** e
*/

#include "../my.h"

int my_hexaminletter(int nb)
{
    char letter;

    if (nb < 10) {
        my_putchar(nb + 48);
    }
    letter = 'a';
    if (nb > 10 && nb < 16) {
        my_putchar((nb - 10) + letter);
    }
    return 0;
}

unsigned int my_hexamin(int nb)
{
    if (nb >= 9) {
        my_hexamin(nb / 16);
        my_hexaminletter((nb % 16));
    } else {
        my_hexaminletter(nb);
    }
    return 0;
}
