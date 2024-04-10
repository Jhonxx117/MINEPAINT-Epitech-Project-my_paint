/*
** EPITECH PROJECT, 2024
** str_to_word_array
** File description:
** e
*/

#include "../includes/my.h"

int word_counter(char const *str)
{
    int a = 0;
    int b = 0;

    while (str[a] != '\0') {
        if (my_isalpha(str[a]) == 1 && my_isalpha(str[a + 1]) != 1){
            b = b + 1;
        }
        a = a + 1;
    }
    return b;
}

char **my_str_to_word_array(char const *str)
{
    int y = word_counter(str);
    char **result = malloc(sizeof(char *) * y + 1);
    int a = 0;
    int b = 0;
    int c = 0;

    while (b < y) {
        c = 0;
        result[b] = malloc(sizeof(char) * my_strlen(str));
        while (str[a] != '\0' && my_isalpha(str[a]) != 0) {
            result[b][c] = str[a];
            c = c + 1;
            a = a + 1;
        }
        result[b][c] = '\0';
        a = a + 1;
        b = b + 1;
    }
    return (result);
}
