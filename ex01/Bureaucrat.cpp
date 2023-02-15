/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:49:29 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/15 23:35:19 by iqabbal          ###   ########.fr       */
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
Bureaucrat::Bureaucrat(const  Bureaucrat &copy):name(copy.name)
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

void Bureaucrat::setGrade(int grade)
{
    this->grade = grade;
}

std::ostream &operator<<(std::ostream &output,const Bureaucrat &b1)
{
    output <<"the Grade is : " << b1.getGrade() << "\nThe Name is : "<< b1.getName() << std::endl;
    return output;
}

const char *Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};

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



void    Bureaucrat::signForm( Form& Form_ ) 
{
    try 
    {
        Form_.beSigned( *this );
        std::cout << *this << " signed "           ;
        std::cout << Form_.get_Name() << std::endl ;
    } catch (Form::GradeTooLowException &e) 
    {
        std:: cout << this->getName()              ;
        std:: cout << " coulnd't sign "            ;
        std:: cout << Form_.get_Name()             ;
        std:: cout << " because "                  ;
        std:: cout << e.what() << std::endl        ;
    }
}
