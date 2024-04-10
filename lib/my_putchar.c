/*
** EPITECH PROJECT, 2023
** my_putchar
** File description:
** e
*/

#include "../includes/my.h"

int my_putchar(char c)
{
    return (write(1, &c, 1));
}
