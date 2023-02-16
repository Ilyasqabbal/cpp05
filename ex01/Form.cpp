/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:45:14 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 04:33:04 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

//getters
std::string Form:: get_Name() const
{
    return(this->Name);
}
bool  Form::get_Signed() const
{
    return(this->Signed);
}
int   Form::get_GradeToSign() const
{
    return(this->GradeToSign);
}
int   Form::get_GradeToExecute() const
{
    return(this->GradeToExecute);
}

//exception
const char *Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};



//orthodox Form
Form::Form(std::string _Name,int _GradeToSign) : Name(_Name) , GradeToSign(_GradeToSign) ,GradeToExecute(0)
{
    this->Signed = false;

    
    if(this->GradeToSign > 150)
        throw GradeTooLowException();
    if(this->GradeToSign < 1)
        throw GradeTooHighException();
    
}

Form::~Form()
{
}
Form::Form(const Form &copy) :Name(copy.get_Name()) , GradeToSign(copy.get_GradeToSign()) ,GradeToExecute(copy.get_GradeToExecute())
{
    this->Signed = copy.get_Signed();
}
Form &Form::operator=(const Form &rf)
{
    if(this != &rf)
    {
        this->Signed = rf.get_Signed();
    }
    return *this;
}



void  Form::beSigned( Bureaucrat& bureaucrat )
{
    if(bureaucrat.getGrade() < this->get_GradeToSign())
    {
        this->Signed = true;
    }
    else
    {
        throw Form::GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &output,const Form &form)
{
     output << "\nF-O-R-M ** I-N-F-O\n" << std::endl;
    output << "Name             : "<< form.get_Name()<< std::endl  ;
    output << "Grade to execute : "<< form.get_GradeToExecute()<< std::endl  ;
    output << "Grade to sign    : "<< form.get_GradeToSign()<< std::endl  ;
    if(form.get_Signed())
        output << "Signed           : True"<< std::endl  ;
    else
        output << "Signed           : False"<< std::endl  ;
    return output;
}