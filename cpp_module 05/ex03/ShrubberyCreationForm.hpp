#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <fstream>

class ShrubberyCreationForm : public AForm
{
    private:
        std::string target;
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm &exist);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm &exist);
        ShrubberyCreationForm(std::string target);
		void execute(Bureaucrat const &executor) const;
};

#endif