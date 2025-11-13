# ************************************************************************** #
#                                Makefile                                   #
# ************************************************************************** #

NAME		= Attack

CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98

SRC			= main.cpp HumanA.cpp HumanB.cpp weapon.cpp
OBJ			= $(SRC:.cpp=.o)
HEADER		= zombie.hpp

# ************************************************************************** #
#                                 Rules                                      #
# ************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp $(HEADER)
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all

# ************************************************************************** #
#                                 PHONY                                      #
# ************************************************************************** #

.PHONY: all clean fclean re

