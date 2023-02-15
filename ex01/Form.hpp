/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:45:08 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/15 01:38:55 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class Form {
  public: 
    Form();
    ~Form();
    Form(const Form &copy);
    Form &operator=(const Form &rf);


    std::string get_Name() const;
    bool        get_Signed() const;
    int         get_GradeToSign() const;
    int         get_GradeToExecute() const;

    void        beSigned( const Bureaucrat& bureaucrat );

    class GradeTooHighException : public std::exception {
    const char* what() const throw();
};

class GradeTooLowException : public std::exception {
    const char* what() const throw();
};
    private:
        const std::string name;
        bool _signed;
        const int sign_it;
        const int execute_it;
    
};




std::string Form:: get_Name() const
{
    return(this->name);
}
bool  Form::get_Signed() const
{
    return(this->_signed);
}
int   Form::get_GradeToSign() const
{
    return(this->sign_it);
}
int   Form::get_GradeToExecute() const
{
    return(this->execute_it);
}

void  Form::beSigned( const Bureaucrat& bureaucrat )
{
    if(bureaucrat.getGrade() > this->get_GradeToSign())
    {
        this->_signed = true;
    }
    else
    {
        
    }
}





#endif


    