NAME =	PhoneBook
CC = c++
CFLAGS += -Wall -Wextra -Werror -std=c++98 -g3

SRC =	./src/PhoneBook.cpp \
		./src/Contact.cpp \
		main.cpp

OBJ = $(SRC:.cpp=.o)

.phony: all re clean fclean

all:		$(NAME)

$(NAME):	$(OBJ)
			$(CC) $(CFLAGS) $(OBJ) -o $(NAME)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

