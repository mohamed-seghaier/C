SRC	=	./main.c		\
		./utils.c		\
		./add.c			\

OBJ	=	$(SRC:.c=.o)

FLAGS = -Wall -Werror -Wextra

NAME	=	my_add_inf

all:	$(NAME)

$(NAME):	$(OBJ)
	gcc	$(FLAGS) -o	$(NAME)	$(OBJ)

superclean: fclean clean
		rm	-f	*~
		rm	-f	*#
		rm	-f	vgcore*

fclean:	clean
		rm	-f	$(NAME)

clean:	
		rm	-f	$(OBJ)

re:	superclean	all