/*
** EPITECH PROJECT, 2023
** my_putstr2
** File description:
** e
*/

#include "../includes/my.h"

void my_putstr(const char *str)
{
    for (int i = 0; str[i] != '\0'; i++) {
        my_putchar(str[i]);
    }
}
