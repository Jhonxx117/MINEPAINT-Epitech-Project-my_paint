/*
** EPITECH PROJECT, 2024
** my.h
** File description:
** e
*/

#include "./incluall.h"
#include "./graphic.h"
#include "../src/structures/color_shape.h"
#pragma once

unsigned int my_decimal(int nb);
double my_expomaj_plus(double nb);
double my_expomaj_minus(double nb);
double my_expomaj(double nb);
double my_expomin_plus(double nb);
double my_expomin_minus(double nb);
double my_expomin(double nb);
int my_float2(double nb);
int my_float(double nb);
int my_hexamajletter(int nb);
unsigned int my_hexamaj(int nb);
int my_hexaminletter(int nb);
unsigned int my_hexamin(int nb);
unsigned int my_octet(int nb);
int my_printf(const char *format, ...);
int my_printf_suite(va_list list, const char *format, int i);
int my_printf_again(va_list list, const char *format, int i);
int my_printf_the_last(va_list list, const char *format, int i);
char *my_strcpy(char *dest, char const *src);
int my_strcmp(char const *s1, char const *s2);
int my_putchar(char c);
void my_putstr(char const *str);
int my_put_nbr(int nb);
char **my_str_to_word_array(char const *str);
int my_isalpha(char c);
int my_strlen(const char *str);
int my_strncmp(const char *s1, const char *s2, size_t n);
char *my_strcat(char *dest, const char *src);
char *my_strdup(const char *str);
char *my_realloc(void *ptr, size_t size);
void window_gesture(sfRenderWindow *window, sfEvent event, color_t *color);
struct button_s *init_button(sfVector2f position, sfVector2f size);
sfBool is_button_clicked(struct button_s *, sfMouseButtonEvent *);
int sound_pop(void);
int sound_click(void);
int sound_cobble(void);
int sound_grass(void);
int sound_ghast(void);
int sound_enderpearl(void);
int sound_bucket(void);
int sound_c418(void);
int sound_oh(void);
int sound_eraser(void);
void analyse_events(sfRenderWindow *window, sfEvent event, color_t *color);
int buttons(sfRenderWindow *window, sfEvent event, color_t *color);
int button_quit_color_blue(sfRenderWindow *window, sfEvent event,
    color_t *color);
int button_color_purple_green(sfRenderWindow *window, sfEvent event,
    color_t *color);
int button_color_yellow_black(sfRenderWindow *window, sfEvent event,
    color_t *color);
int button_color_red_orange(sfRenderWindow *window, sfEvent event,
    color_t *color);
int button_color_pink(sfRenderWindow *window, sfEvent event,
    color_t *color);
int file_save_help(sfRenderWindow *window, sfEvent event);
int cursor(sfRenderWindow *window, sfEvent event, color_t *color);
int brush(sfRenderWindow *window, sfEvent event, color_t *color);
int bucket(sfRenderWindow *window, sfEvent event);
int eraser(sfRenderWindow *window, sfEvent event, color_t *color);
int grass(sfRenderWindow *window, sfEvent event, color_t *color);
int nether(sfRenderWindow *window, sfEvent event, color_t *color);
int enderpearl(sfRenderWindow *window, sfEvent event, color_t *color);
int cobblestone(sfRenderWindow *window, sfEvent event, color_t *color);
int minecraft(sfRenderWindow *window, sfEvent event);
int steve(sfRenderWindow *window, sfEvent event);
void init_colors(color_t *color);
void init_shapes(shape_t *shape);
int handle_drawing(sfRenderWindow *window, sfBool if_pressed, sfColor colour,
    color_t *color);
sfColor handle_color(color_t *color);
void draw(sfRenderWindow *window, color_t *color);
void color_blue(color_t *color);
void color_purple(color_t *color);
void color_green(color_t *color);
void color_yellow(color_t *color);
void color_black(color_t *color);
void color_red(color_t *color);
void color_orange(color_t *color);
void color_pink(color_t *color);
int erase_options(sfRenderWindow *window, sfBool if_pressed, sfColor colour,
    color_t *color);
void eraser_tool(sfRenderWindow *window, color_t *color);
int square_drawing(sfRenderWindow *window, sfBool if_pressed, sfColor colour,
    color_t *color);
void square(sfRenderWindow *window, color_t *color);
int circle_drawing(sfRenderWindow *window, sfBool if_pressed, sfColor colour,
    color_t *color);
void circle(sfRenderWindow *window, color_t *color);
int rectangle_drawing(sfRenderWindow *window, sfBool if_pressed,
    sfColor colour, color_t *color);
void rectangle(sfRenderWindow *window, color_t *color);
int triangle_drawing(sfRenderWindow *window, sfBool if_pressed, sfColor colour,
    color_t *color);
void triangle(sfRenderWindow *window, color_t *color);
void save_drawings(sfRenderWindow *window, sfEvent event);
int more_save(sfRenderWindow *window, sfSprite *sprite, sfTexture *texture,
    sfRenderTexture *renderTexture);
void display_help(sfRenderWindow *window, sfEvent event);
sfColor handle_color_bucket(color_t *color);
int cursor_drawing(sfRenderWindow *window, sfBool if_pressed, sfColor colour,
    color_t *color);
void cursor_tool(sfRenderWindow *window, color_t *color);
