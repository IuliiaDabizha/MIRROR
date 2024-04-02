##
## EPITECH PROJECT, 2024
## MIRROR
## File description:
## Makefile
##

CC = gcc
NAME = concat_parameters
SRC = concat_parameters.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME):
	$(CC) -o $(NAME) $(SRC)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
