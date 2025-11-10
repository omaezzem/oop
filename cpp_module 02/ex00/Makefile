# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: omaezzem <omaezzem@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/10/10 11:29:19 by omaezzem          #+#    #+#              #
#    Updated: 2025/10/22 12:49:54 by omaezzem         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

NAME = occf
SRC = main.cpp Fixed.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.cpp Fixed.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
		
re: fclean all