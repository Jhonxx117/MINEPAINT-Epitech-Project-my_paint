/*
** EPITECH PROJECT, 2023
** mini_printf
** File description:
** e
*/

#include "../my.h"

int my_printf(const char *format, ...)
{
    va_list list;

    va_start(list, format);
    for (int i = 0; format[i] != '\0'; i++) {
        if (format[i] == '%') {
            i++;
            my_printf_suite(list, format, i);
            my_printf_again(list, format, i);
            my_printf_the_last(list, format, i);
        } else {
            my_putchar(format[i]);
        }
    }
    va_end(list);
    return 0;
}

int my_printf_suite(va_list list, const char *format, int i)
{
    if (format[i] == 'c') {
        my_putchar(va_arg(list, int));
    }
    if (format[i] == 's') {
        my_putstr(va_arg(list, char *));
    }
    if (format[i] == 'i') {
        my_put_nbr(va_arg(list, int));
    }
    if (format[i] == '%') {
        my_putchar('%');
    }
    if (format[i] == 'd') {
        my_put_nbr(va_arg(list, int));
    }
    if (format[i] == 'o') {
        my_octet(va_arg(list, int));
    }
    return 0;
}

int my_printf_again(va_list list, const char *format, int i)
{
    if (format[i] == 'u') {
        my_decimal(va_arg(list, int));
    }
    if (format[i] == 'x') {
        my_hexamin(va_arg(list, int));
    }
    if (format[i] == 'X') {
        my_hexamaj(va_arg(list, int));
    }
    if (format[i] == 'e') {
        my_expomin(va_arg(list, double));
    }
    if (format[i] == 'E') {
        my_expomaj(va_arg(list, double));
    }
    if (format[i] == 'f') {
        my_float(va_arg(list, double));
    }
    return 0;
}

int my_printf_the_last(va_list list, const char *format, int i)
{
    if (format[i] == 'F') {
        my_float2(va_arg(list, double));
    }
    return 0;
}
