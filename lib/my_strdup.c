/*
** EPITECH PROJECT, 2024
** strdup
** File description:
** e
*/

#include "../includes/my.h"

char *my_strdup(const char *str)
{
    size_t len = my_strlen(str);
    char *new_str = (char *)malloc((len + 1) * sizeof(char));

    my_strcpy(new_str, str);
    return new_str;
}
