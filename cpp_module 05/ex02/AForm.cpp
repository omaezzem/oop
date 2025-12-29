#include "AForm.hpp"

std::string const AForm::get_name() const {return (name);}
bool    AForm::get_is_signed() const {return (is_signed);};
int AForm::get_grade_sign() const{return (grade_sign);};
int AForm::get_grade_exec() const{return (grade_exec);};

AForm::AForm() :   name("xform"), is_signed(false), grade_sign(3), grade_exec(140)
{
    if (grade_exec > 150 || grade_sign > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade_exec < 1 || grade_sign < 1)
        throw Bureaucrat::GradeTooHightException();
}

AForm::~AForm() {}

AForm::AForm(const AForm &exist) : name(exist.name), is_signed(exist.is_signed),
                                grade_sign(exist.grade_sign), grade_exec(exist.grade_exec) {}

AForm &AForm::operator=(const AForm &exist)
{
    if (this != &exist)
        is_signed = exist.is_signed;
    return *this;
}
AForm::AForm(std::string const namep, int const grade_signp, int const grade_execp, bool is_signedp) : 
    name(namep), is_signed(is_signedp), grade_sign(grade_signp), grade_exec(grade_execp)
{
    if (grade_exec > 150 || grade_sign > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade_exec < 1 || grade_sign < 1)
        throw Bureaucrat::GradeTooHightException();
}

void    AForm::beSigned(Bureaucrat &b)
{
    if (b.get_grade() <= grade_sign)
        is_signed = true;
}

std::ostream& operator<<(std::ostream& os, const AForm& AForm)
{
    os << "AForm  " << AForm.get_name()
       << " , signed:  " << AForm.get_is_signed()
       << " , sign grade:  " << AForm.get_grade_sign()
       << " , execute grade:  " << AForm.get_grade_exec();
    return os;
}
