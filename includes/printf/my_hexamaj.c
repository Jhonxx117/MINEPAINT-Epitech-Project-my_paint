/*
** EPITECH PROJECT, 2023
** my_hexamaj
** File description:
** e
*/

#include "../my.h"

int my_hexamajletter(int nb)
{
    char letter;

    if (nb < 10) {
        my_putchar(nb + 48);
    }
    letter = 'A';
    if (nb > 9 && nb < 16) {
        my_putchar((nb - 10) + letter);
    }
    return 0;
}

unsigned int my_hexamaj(int nb)
{
    if (nb >= 9) {
        my_hexamaj(nb / 16);
        my_hexamajletter(nb % 16);
        } else {
        my_hexamajletter(nb);
    }
    return 0;
}
