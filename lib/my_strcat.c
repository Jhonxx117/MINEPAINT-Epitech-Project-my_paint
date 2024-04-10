/*
** EPITECH PROJECT, 2024
** strcat
** File description:
** e
*/

#include "../includes/my.h"

char *my_strcat(char *dest, const char *src)
{
    char *ptr = dest;

    while (*ptr != '\0')
        ptr++;
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0';
    return dest;
}
