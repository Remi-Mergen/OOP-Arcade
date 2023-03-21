##
## EPITECH PROJECT, 2023
## B-OOP-400-STG-4-1-arcade-remi.mergen
## File description:
## Makefile
##

SRC	=   src/Game.cpp

INC	=	-I ../../include

CPPFLAGS = -W -Wall -Wextra $(INC)

OBJ	=	$(SRC:.cpp=.o)

NAME	=	arcade

all:	$(NAME)

$(NAME) :			$(OBJ)
	@g++ -o $(NAME) $(OBJ) $(CPPFLAGS)

clean:
	@rm -f $(OBJ)

fclean:		clean
	@rm -f ../$(NAME)

re:			fclean all

.PHONY: re clean fclean all