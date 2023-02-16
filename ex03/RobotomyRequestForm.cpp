/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:54:44 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 03:29:26 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() :  AForm("RobotomyRequestForm", 72, 45)
{
    
}
RobotomyRequestForm::RobotomyRequestForm(std::string Target) :  AForm("RobotomyRequestForm", 72, 45)
{
    this->Target = Target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
    
}
RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy) :  AForm("RobotomyRequestForm", 72, 45)
{
    this->Target = copy.Target;
}

//exception
const char * RobotomyRequestForm::GradeTooHighException::what() const throw() {
	return ("Robot grade is too high.");
}

const char * RobotomyRequestForm::FormNotSigned::what() const throw() {
	return ("Robot not signed yet.");
}


RobotomyRequestForm &RobotomyRequestForm ::operator=(const RobotomyRequestForm &rf)
{
    if(this != &rf)
    {
        this->Target = rf.Target;
    }
    return *this;
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const{
	if (this->get_Signed() == false )
		throw FormNotSigned();
	if (executor.getGrade() > this->get_GradeToExecute())
		throw GradeTooHighException();
	else
    {
        if(random() % 100  < 50)
        {
            std::cout << this->Target;
            std::cout <<"has been robotomized";
            std::cout << "successfully 50\% of the time";
            std::cout << std::endl;
        }
        else
        {
            std::cout << this->Target;
            std::cout <<"hasn't been robotomized";
            std::cout << "successfully 50\% of the time";
            std::cout << std::endl;
        }
        
    }
}