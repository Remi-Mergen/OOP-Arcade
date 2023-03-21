##
## EPITECH PROJECT, 2023
## B-OOP-400-STG-4-1-arcade-remi.mergen
## File description:
## Makefile
##

CXX = g++

CXXFLAGS = -Wall -Wextra -std=c++20 -fPIC

SRC_NCURSES = ./ncurses/Ncurses.cpp

SRC_SDL = ./sdl2/Sdl2.cpp

SRC_SFML = ./sfml/Sfml.cpp

LIB_NCURSES = arcade_ncurses.so
LIB_SDL = arcade_sdl2.so
LIB_SFML = arcade_sfml.so

LIB_PATH = ../lib

all: $(LIB_NCURSES) $(LIB_SDL) $(LIB_SFML)

$(LIB_NCURSES): $(SRC_NCURSES)
	$(CXX) $(CXXFLAGS) -shared -o $(LIB_NCURSES) $(SRC_NCURSES) -lncurses
	mv $(LIB_NCURSES) $(LIB_PATH)

#TODO: add sdl flag after $(SRC_SDL)
$(LIB_SDL): $(SRC_SDL)
	$(CXX) $(CXXFLAGS) -shared -o $(LIB_SDL) $(SRC_SDL)
	mv $(LIB_SDL) $(LIB_PATH)

$(LIB_SFML): $(SRC_SFML)
	$(CXX) $(CXXFLAGS) -shared -o $(LIB_SFML) $(SRC_SFML) -lsfml-graphics -lsfml-window -lsfml-system
	mv $(LIB_SFML) $(LIB_PATH)

clean:
	rm -f $(LIB_PATH)/$(LIB_NCURSES) $(LIB_PATH)/$(LIB_SDL) $(LIB_PATH)/$(LIB_SFML)

fclean:		clean
	rm -f $(LIB_PATH)/$(LIB_NCURSES) $(LIB_PATH)/$(LIB_SDL) $(LIB_PATH)/$(LIB_SFML)

re: fclean all

.PHONY: all clean fclean re
