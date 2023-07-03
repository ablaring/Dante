##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makefile
##

SRC	=	main.c \
		find_x.c \
		error_handling.c

CFLAGS	+= -W -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

LDFLAGS =	-L ../lib/my/ -lmy -lm

NAME = solver

all:
	@$(MAKE) -s -j8 $(NAME)

$(NAME) : $(OBJ)
	$(MAKE) -C ../lib/my/
	$(CC) -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

clean :
	$(RM) *.o

fclean : clean
	$(RM) a.out
	$(MAKE) fclean -C ../lib/my/
	$(RM) $(NAME)
	$(RM) vgcore*
	$(RM) coding-style*

re : fclean all

debug: CFLAGS += -g
debug: $(OBJ)
	$(CC) -g -o $(NAME) $(OBJ) $(CFLAGS) $(LDFLAGS)

test :
	cp -rf $(NAME) ./tester
	./tester/tester.sh
