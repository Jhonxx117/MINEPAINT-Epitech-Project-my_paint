##
## EPITECH PROJECT, 2024
## Makefile
## File description:
## e
##

SRC	=	./includes/printf/my_printf.c \
		./includes/printf/my_decimal.c \
		./includes/printf/my_expomaj.c \
		./includes/printf/my_expomin.c \
		./includes/printf/my_float.c \
		./includes/printf/my_float2.c \
		./includes/printf/my_hexamaj.c \
		./includes/printf/my_hexamin.c \
		./includes/printf/my_octet.c \
		./lib/my_str_to_word_array.c \
		./lib/my_isalpha.c \
		./lib/my_putchar.c \
		./lib/my_put_nbr.c \
		./lib/my_putstr.c \
		./lib/my_strcpy.c \
		./lib/my_strcmp.c \
		./lib/my_strncmp.c \
		./lib/my_strlen.c \
		./lib/my_strcat.c \
		./lib/my_strdup.c \
		./lib/realloc_custom.c \
		./sound/sounds.c \
		./sound/sounds_second.c \
		./src/window.c	\
		./src/button.c \
		./src/events.c \
		./src/bottom_buttons.c \
		./src/color_shape_gesture.c \
		./src/top_buttons.c	\
		./src/shape_buttons.c	\
		./src/secrets_buttons.c	\
		./src/draw.c	\
		./src/eraser.c \
		./src/shapes/circle.c \
		./src/shapes/square.c \
		./src/shapes/triangle.c \
		./src/shapes/rectangle.c \
		./src/colors/color.c \
		./src/colors/color_second.c \
		./src/handle_colors.c \
		./src/save_draw.c	\
		./src/help.c	\
		./src/cursor.c \
		main.c \

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall -Wextra

CGRAPH	=	-lcsfml-graphics -lcsfml-audio -lcsfml-system

NAME	=	my_paint

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc -o $(NAME)	$(OBJ)	$(CFLAGS) $(CGRAPH)

clean:
	rm -f $(OBJ)

clean+:
	rm -f *~
	rm -f *#
	rm -f vgcore.*
	rm -f ./includes//*~ \
	rm -f ./includes//*# \
	rm -f ./includes//vgcore.* \
	rm -f ./lib//*~ \
	rm -f ./lib//*# \
	rm -f ./lib//vgcore.* \
	rm -f ./src//*~ \
	rm -f ./src//*# \
	rm -f ./src//vgcore.* \
	rm -f ./sound//*~ \
	rm -f ./sound//*# \
	rm -f ./sound//vgcore.* \
	rm -f ./image//*~ \
	rm -f ./image//*# \
	rm -f ./image//vgcore.* \

fclean:	clean	clean+
	rm -f $(NAME)

re: fclean all
