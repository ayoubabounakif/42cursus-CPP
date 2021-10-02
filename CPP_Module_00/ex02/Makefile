NAME = account
CC = clang++
CFLAGS = -Wall -Werror -Wextra -fsanitize=address
SRC = Account.cpp \
tests.cpp \

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
