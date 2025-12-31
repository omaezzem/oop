CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98 

NAME = Bureaucrat
SRC = Bureaucrat.cpp main.cpp AForm.cpp PresidentialPardonForm.cpp\
 		RobotomyRequestForm.cpp ShrubberyCreationForm.cpp Intern.cpp
OBJ = $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	
%.o: %.cpp Bureaucrat.hpp AForm.hpp PresidentialPardonForm.hpp\
 		RobotomyRequestForm.hpp ShrubberyCreationForm.hpp Intern.hpp
	$(CXX) $(CXXFLAGS) -c $< -o $@ 
clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
