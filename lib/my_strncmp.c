/*
** EPITECH PROJECT, 2024
** strncmp
** File description:
** e
*/

#include "../includes/my.h"

int my_strncmp(const char *s1, const char *s2, size_t n)
{
    while (n > 0 && (*s1 != '\0' || *s2 != '\0')) {
        if (*s1 != *s2)
            return (*s1 - *s2);
        s1++;
        s2++;
        n--;
    }
    return 0;
}
