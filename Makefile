##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## Makefile
##

SRC	=	$(wildcard *.c)

NAME	=	matchstick

OBJ	=	$(SRC:.c=.o)

CC	=	gcc

LFLAGS	=	-L./lib -lmy
NFLAGS	=	-lncurses
MFLAGS	=	-C./lib/my
CFLAGS	=	-I./include
CSFMLFLAGS	=	-l csfml-graphics -l csfml-audio -l csfml-system -l csfml-window

all:	$(NAME)

END		+=	\e[0m"
CBLUE	+=	"\e[1;34m

$(NAME):	$(OBJ)
	@echo -e $(CBLUE)======[BUILDING]=====$(END)
	make $(MFLAGS)
	@echo -e $(CBLUE)======[COMPLETE]=====$(END)
	$(CC) -o $(NAME) $(OBJ) $(LFLAGS) $(CFLAGS) -g3
	rm -f *.o
	@echo -e $(CBLUE)======[COMPILED]=====$(END)

clean:
	rm -f $(NAME)
	rm -f *.o
	rm -f vgcore.*

fclean:	clean
	make $(MFLAGS) clean

re:	fclean all

%.o: %.c
	gcc -o $@ -c $< $(CFLAGS)
