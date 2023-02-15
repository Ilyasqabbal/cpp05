/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:45:14 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/15 01:38:15 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
    
}
Form::~Form()
{
    
}
Form::Form(const Form &copy)
{
    
}
Form &Form::operator=(const Form &rf)
{
    
}
//this function is check the form  if signed or not
//and check the grade if higher is set bool variable true else set it false

void beSigned(Bureaucrat &b1)
{
    if()
}

signForm(Form &form)
{
    if()
    {
        std::cout << "bureaucrat signed the form" << std::endl;
    }
    else
    {
        std::cout << "bureaucrat could not signed the form" << std::endl;
    }
}

const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};



