NAME = animal
CC = clang++
CFLAGS = -Wall -Werror -Wextra
SRC = main.cpp \
	Animal.cpp Dog.cpp Cat.cpp \
	Brain.cpp \

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
