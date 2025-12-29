#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
    try
    {
        Form f;
        Bureaucrat b;
        f.beSigned(b);
        b.signForm(f);
        std::cout << f <<std::endl;
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
