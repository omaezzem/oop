#include "Form.hpp"

std::string const Form::get_name() const {return (name);}
bool    Form::get_is_signed() const {return (is_signed);};
int Form::get_grade_sign() const{return (grade_sign);};
int Form::get_grade_exec() const{return (grade_exec);};

Form::Form() :   name("xform"), is_signed(false), grade_sign(3), grade_exec(140)
{
    if (grade_exec > 150 || grade_sign > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade_exec < 1 || grade_sign < 1)
        throw Bureaucrat::GradeTooHightException();
}

Form::~Form() {}

Form::Form(const Form &exist) : name(exist.name), is_signed(exist.is_signed),
                                grade_sign(exist.grade_sign), grade_exec(exist.grade_exec) {}

Form &Form::operator=(const Form &exist)
{
    if (this != &exist)
        is_signed = exist.is_signed;
    return *this;
}
Form::Form(std::string const namep, int const grade_signp, int const grade_execp, bool is_signedp) : 
    name(namep), is_signed(is_signedp), grade_sign(grade_signp), grade_exec(grade_execp)
{
    if (grade_exec > 150 || grade_sign > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade_exec < 1 || grade_sign < 1)
        throw Bureaucrat::GradeTooHightException();
}

void    Form::beSigned(Bureaucrat &b)
{
    if (b.get_grade() <= grade_sign)
        is_signed = true;
    else
        throw Bureaucrat::GradeTooLowException();
}

std::ostream& operator<<(std::ostream& os, const Form& form)
{
    os << "Form  " << form.get_name()
       << " , signed:  " << form.get_is_signed()
       << " , sign grade:  " << form.get_grade_sign()
       << " , execute grade:  " << form.get_grade_exec();
    return os;
}
