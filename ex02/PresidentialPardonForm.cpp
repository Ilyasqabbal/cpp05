/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 01:17:14 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 04:19:15 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


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


//function added 
void PresidentialPardonForm::execute(Bureaucrat const & executor) const{
	if (this->get_Signed() == false )
		throw FormNotSigned();
	if (executor.getGrade() > this->get_GradeToExecute())
		throw GradeTooHighException();
	else
		{
            std::cout << "has been pardoned by Zafod Beeblebrox."  << std::endl;
        }
}

