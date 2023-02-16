#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonFor",25,5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string Target) : AForm("PresidentialPardonFor",25,5)
{
    this->Target = Target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy) :AForm("PresidentialPardonFor",25,5)
{
    this->Target = copy.Target;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &rf)
{
    if(this != &rf)
    {
        this->Target = rf.Target;
    }
    return *this;
}

//Exception

const char * PresidentialPardonForm::GradeTooHighException::what() const throw() {
	return ("Pardon grade is too high.");
}

const char * PresidentialPardonForm::FormNotSigned::what() const throw() {
	return ("Pardon not signed yet.");
}
