##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make lib
##

SRC	=	$(wildcard *.c)

OBJ	=	$(SRC:.c=.o)

NAME	=	create_lib

all:	$(NAME)

$(NAME):	$(OBJ)
	ar rc libmy.a $(OBJ)
	cp libmy.a ../
	cp my.h ../../include
	rm -f $(OBJ)

clean:
	rm -f libmy.a
	rm -f ../libmy.a
	rm -f ../../include/my.h
