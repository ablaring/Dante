##
## EPITECH PROJECT, 2022
## Makefile
## File description:
## task01
##

SRC =	sum_strings_length.c	\
		my_printf.c	\
		my_putstr.c	\
		pointer_transf.c	\
		function_printf.c	\
		my_strlen.c	\
		function_second.c	\
		my_getnbr.c	\
		function_precision.c \
		my_put_nbr.c \
		my_put_nbr_two.c \
		my_putchar.c \
		my_putstr_two.c \
		my_revstr.c \
		my_str_isalpha.c \
		my_str_islower.c \
		my_str_isnum.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_strcapitalize.c \
		my_str_to_word_array.c \
		my_strcat.c \
		my_strcmp.c \
		my_strcpy.c \
		my_strdup.c \
		my_strlowcase.c \
		my_strncat.c \
		my_strncmp.c \
		my_strncpy.c \
		my_strstr.c \
		my_strupcase.c \
		my_swap.c \
		permission.c \
		my_strnumber.c

OBJ	=	$(SRC:.c=.o)

compile : $(OBJ)
	ar rc libmy.a $(OBJ)

clean :
	rm -f $(OBJ)

fclean : clean
	rm -f a.out
	rm -rf libmy.a

re : fclean
