CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp ScavTrap.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = ex01

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -o $(NAME) $^ $(CXXFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re