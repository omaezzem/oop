#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <iostream>
#include <string>

class RobotomyRequestForm : public AForm
{
    private:
        std::string target;
    public:
        RobotomyRequestForm();
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &exist);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &exist);
        RobotomyRequestForm(std::string target);
};

#endif