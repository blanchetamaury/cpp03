CXX = c++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp ClapTrap.cpp

OBJ = $(SRC:%.cpp=%.o)

NAME = ex00

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) -c $(SRC) $(CXXFLAGS)
	$(CXX) -o $(NAME) $^ $(CXXFLAGS)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re