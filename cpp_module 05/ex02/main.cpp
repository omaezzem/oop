#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    Bureaucrat bob("Bob", 1);
    ShrubberyCreationForm form("garden");
    try
    {
        form.beSigned(bob);
        std::cout << "Form signed successfully." << std::endl;
        form.execute(bob);
        std::cout << "Form executed successfully." << std::endl;
    }
    catch(Bureaucrat::GradeTooHightException &b)
    {
        std::cout << "Exception : grade is too hight \n";
    }
    catch(Bureaucrat::GradeTooLowException &b)
    {
        std::cout << "Exception : grade is too low \n";
    }
}
