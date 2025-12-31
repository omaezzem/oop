#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern() {}
Intern::Intern(const Intern& other) {(void)other;}
Intern::~Intern() {}
Intern& Intern::operator=(const Intern& other)
{
    (void)other;
    return *this;
}

static AForm* createShrubbery(std::string const &target)
{
    return new ShrubberyCreationForm(target);
}

static AForm* createRobotomy(std::string const &target)
{
    return new RobotomyRequestForm(target);
}

static AForm* createPresidential(std::string const &target)
{
    return new PresidentialPardonForm(target);
}

AForm* Intern::makeForm(std::string const &formName, std::string const &target)
{
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    AForm* (*creators[3])(std::string const &) = {&createShrubbery, &createRobotomy, &createPresidential};
    int i = -1;
    while (++i < 3)
    {       
        if (forms[i] == formName)
        {
            std::cout << "Intern creates " << formName << std::endl;
            return creators[i](target);
        }
    }
    std::cout << "Error: Intern cannot create form \"" 
            << formName << "\" (unknown form)" << std::endl;
    return NULL;
}
