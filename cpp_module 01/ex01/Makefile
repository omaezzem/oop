# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/08/27 17:16:25 by omaezzem          #+#    #+#              #
#    Updated: 2025/08/27 17:30:40 by omaezzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98

NAME = Zombie
SRC = main.cpp zombieHorde.cpp Zombie.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
		
re: fclean all
