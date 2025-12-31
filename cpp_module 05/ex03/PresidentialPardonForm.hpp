#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>
#include <fstream>

class PresidentialPardonForm : public AForm
{
    private:
        std::string target;
    public:
        PresidentialPardonForm();
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &exist);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &exist);
        PresidentialPardonForm(std::string target);
		void execute(Bureaucrat const &executor) const;
};

#endif