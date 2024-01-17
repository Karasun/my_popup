##
## EPITECH PROJECT, 2018
## bootstrap
## File description:
## popup
##

SRC	=	main.c

OBJ	=	$(SRC:.c=.o)

CFLAGS	=	-Wall		\
		-Wextra		\
		-I./include	\

NAME	=	my_popup

all:	$(NAME)

$(NAME):	$(OBJ)
		gcc -o $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *~
	rm -f *#

fclean:	clean
	rm -f $(NAME)

re:	fclean all

auteur:
	echo $(USER) > auteur
