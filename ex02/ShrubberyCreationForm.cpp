/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 01:23:14 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 02:38:13 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationFor", 145, 137)
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string Target) :  AForm("ShrubberyCreationFor", 145, 137)
{
    if(Target != "")
        this->Target = Target;
}
ShrubberyCreationForm::~ShrubberyCreationForm()
{
    
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy) : AForm("ShrubberyCreationFor", 145, 137)
{
    this->Target = copy.Target;
}
ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm &rf)
{
    if(this != &rf)
    {
        this->Target = rf.Target;
    }
    return *this;
}

const char * ShrubberyCreationForm::GradeTooHighException::what() const throw() {
	return ("Shrubbery grade is too high.");
}

const char * ShrubberyCreationForm::FormNotSigned::what() const throw() {
	return ("Shrubbery not signed yet.");
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    std::fstream file;
    
    std::string tree = "\
          v\n\
         >X<\n\
          A\n\
         d$b\n\
       .dv$b.\n\
     .d$i$$v$$b.\n\
        d$$@b\n\
       dv$$$ib\n\
     .d$$$v$$$b\n\
   .d$$@$$$$v$$ib.\n\
       d$$i$$b\n\
      dv$$$$@$b\n\
   .d$@$$v$$$$$@b.\n\
 .d$$$$i$$$v$$$$$$b.\n\
         ###\n\
         ###\n\
         ### iqabbal ";
         
	if (this->get_Signed() == false )
		throw FormNotSigned();
	if (executor.getGrade() > this->get_GradeToExecute())
		throw GradeTooHighException();
	else{
        std::string name = this->Target + "__shrubbery";
        file.open(name,std::fstream::out);
        file << tree;
        if(file.fail())
        {
            std::cout << "failed open the file";
            exit(1);
        }
	    file.close();
    }
}
