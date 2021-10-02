NAME = diamondtrap
CC = clang++
CFLAGS = -Wall -Werror -Wextra
EXTRA_FLAGS = -Wshadow -Wno-shadow
SRC = main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

all: $(NAME)

$(NAME): $(SRC)
	$(CC) $(CFLAGS) $(EXTRA_FLAGS) $(SRC) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re : fclean all

.PHONY: clean fclean all re
