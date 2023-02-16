/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:45:14 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/15 23:56:29 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

//getters
std::string AForm:: get_Name() const
{
    return(this->Name);
}
bool  AForm::get_Signed() const
{
    return(this->Signed);
}
int   AForm::get_GradeToSign() const
{
    return(this->GradeToSign);
}
int   AForm::get_GradeToExecute() const
{
    return(this->GradeToExecute);
}

//exception
const char *AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low");
};

const char *AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high");
};



//orthodox AForm
AForm::AForm(std::string _Name,int _GradeToSign,int _GradeToExecute) : Name(_Name) , GradeToSign(_GradeToSign) ,GradeToExecute(_GradeToExecute)
{
    this->Signed = false;

    
    if(this->GradeToSign > 150 || this->GradeToExecute > 150)
        throw GradeTooLowException();
    if(this->GradeToSign < 1 || this->GradeToExecute < 1)
        throw GradeTooHighException();
    
}

AForm::~AForm()
{
}
AForm::AForm(const AForm &copy) :Name(copy.get_Name()) , GradeToSign(copy.get_GradeToSign()), GradeToExecute(get_GradeToExecute())
{
    this->Signed = copy.get_Signed();
}
AForm &AForm::operator=(const AForm &rf)
{
    if(this != &rf)
    {
        this->Signed = rf.get_Signed();
    }
    return *this;
}



void  AForm::beSigned( Bureaucrat& bureaucrat )
{
    if(bureaucrat.getGrade() < this->get_GradeToSign())
    {
        this->Signed = true;
    }
    else
    {
        throw AForm::GradeTooLowException();
    }
}

std::ostream &operator<<(std::ostream &output,const AForm &AForm)
{
    output << "\nF-O-R-M ** I-N-F-O\n" << std::endl;
    output << "Name             : "<< AForm.get_Name()<< std::endl  ;
    output << "Grade to execute : "<< AForm.get_GradeToExecute()<< std::endl  ;
    output << "Grade to sign    : "<< AForm.get_GradeToSign()<< std::endl  ;
    if(AForm.get_Signed())
        output << "Signed           : True"<< std::endl  ;
    else
        output << "Signed           : False"<< std::endl  ;
    return output;
}