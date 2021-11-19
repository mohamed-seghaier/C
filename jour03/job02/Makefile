SRC	=	./main.c		\
		./my_puts.c		\

OBJ	=	$(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

NAME	=	my_first_make

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc	$(FLAGS) -o	$(NAME)	$(OBJ)

superclean:
		rm	-f	*~
		rm	-f	*#
		rm	-f	vgcore*

clean:	superclean
		rm	-f	$(NAME)

fclean:	clean
		rm	-f	$(OBJ)

re:	fclean	all