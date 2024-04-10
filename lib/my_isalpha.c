/*
** EPITECH PROJECT, 2023
** my_isalpha.c
** File description:
** e
*/

int my_isalpha(char c)
{
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return (1);
    }
    return (0);
}
