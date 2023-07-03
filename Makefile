##
## EPITECH PROJECT, 2023
## Makefile
## File description:
## makefile
##

CFLAGS	+= -W -Wall -Wextra

OBJ	=	$(SRC:.c=.o)

NAME = mysh

all :
	@$(MAKE) -s -j8 $(NAME)

$(NAME):	make_lib $(OBJ)

make_lib:
	make -C ./lib/my/
	make -C ./generator
	make -C ./solver

clean :
	rm -f *.o

fclean : clean
	rm -f a.out
	make fclean -C ./lib/my/
	make fclean -C ./generator
	make fclean -C ./solver
	rm -rf $(NAME)
	rm -rf vgcore*
	rm -rf coding-style*

re : fclean

debug:	CFLAGS += -g
debug:	$(OBJ)
	make -C ./lib/my/
	make debug -C ./generator
	make debug -C ./solver
