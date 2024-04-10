/*
** EPITECH PROJECT, 2023
** my_strlen2.c
** File description:
** e
*/

int my_strlen(const char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        i++;
    }
    return (i);
}
