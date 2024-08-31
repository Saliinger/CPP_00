NAME =	megaphone
CC = c++
CFLAGS += -Wall -Wextra -Werror -std=c++98

SRC = megaphone.cpp

OBJ = $(SRC:.cpp=.o)

.phony: all re clean fclean

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -f $(OBJ)

flcean:		clean
			rm -f $(NAME)

re:			fclean all

