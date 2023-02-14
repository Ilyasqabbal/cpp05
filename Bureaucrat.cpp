/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:49:29 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/14 13:34:59 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat ::Bureaucrat(std::string name,int grade):name(name),grade(grade)
{
    if(name == "")
    {
        std::cout << "invalid" << std::endl;
    }
    if(grade > 150)
    {
        std::cout << "invalid grade" << std::endl;
    }
    if(grade < 1)
    {
        std::cout << "invalid grade" << std::endl;
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

void Bureaucrat::increment()
{
    if(this->grade > 1)
    {
        this->grade--;
    }
    else
    {
        //throw
    }
}
void Bureaucrat::decrement();
{
    if(this->grade < 150)
    {
        this->grade++;
    }
    else
    {
        //throw
    }
}