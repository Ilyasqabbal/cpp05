/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:49:29 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/15 01:37:39 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat ::Bureaucrat(std::string name,int grade):name(name)
{
    if(name == "")
    {
        name = "Default";
    }
    if(grade > 150)
    {
        throw GradeTooHighException();
    }
    else if(grade < 1)
    {
        throw GradeTooLowException();
    }
    else
    {
        this->grade = grade;
    }
    
}

Bureaucrat::~Bureaucrat()
{
}
Bureaucrat::Bureaucrat(const  Bureaucrat &copy)
{
    this->grade = copy.grade;
}
Bureaucrat &Bureaucrat::operator=( Bureaucrat const &rf)
{
    if(this != &rf)
    {
        this->grade = rf.grade;
    }
    return *this;
    
}

std::string Bureaucrat:: getName()const
{
    return this->name;
}

int Bureaucrat:: getGrade()const
{
    return this->grade;
}

std::ostream &operator>>(std::ostream &output,const Bureaucrat &b1)
{
    output <<"the Grade is : " << b1.getGrade() << "\nThe Name is : "<< b1.getName() << std::endl;
    return output;
}


void Bureaucrat::increment()
{
    if(this->grade > 1)
    {
        this->grade--;
    }
    else
    {
       throw GradeTooHighException();
    }
}
void Bureaucrat::decrement()
{
    if(this->grade < 150)
    {
        this->grade++;
    }
    else
    {
        throw GradeTooLowException();                                                                                                                                         
}


}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};
