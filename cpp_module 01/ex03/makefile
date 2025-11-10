# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/09/08 15:11:13 by omaezzem          #+#    #+#              #
#    Updated: 2025/09/20 15:44:44 by omaezzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 -g3 -fsanitize=address

NAME = fight
SRC = main.cpp HumanA.cpp HumanB.cpp Weapon.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.cpp Weapon.hpp HumanB.hpp HumanA.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
		
re: fclean all
