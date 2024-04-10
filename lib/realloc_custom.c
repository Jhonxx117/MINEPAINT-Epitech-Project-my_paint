/*
** EPITECH PROJECT, 2024
** realloc_custom
** File description:
** e
*/

#include "../includes/my.h"

void *my_memcpy(void *dest, const void *src, size_t n)
{
    unsigned char *d = (unsigned char *)dest;
    const unsigned char *s = (const unsigned char *)src;

    for (size_t i = 0; i < n; ++i) {
        d[i] = s[i];
    }
    return dest;
}

char *my_realloc(void *ptr, size_t size)
{
    void *new_ptr = 0;
    size_t old_size = 0;
    size_t copy_size = 0;

    if (ptr == NULL)
        return malloc(size);
    if (size == 0) {
        free(ptr);
        return NULL;
    }
    new_ptr = malloc(size);
    old_size = *((size_t *)ptr - 1);
    copy_size = (size < old_size) ? size : old_size;
    my_memcpy(new_ptr, ptr, copy_size);
    free(ptr);
    return new_ptr;
}
