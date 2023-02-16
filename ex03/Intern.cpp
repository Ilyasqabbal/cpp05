/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 00:27:16 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 05:45:03 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern:: Intern()
{
}
Intern:: ~Intern()
{
}
Intern:: Intern(const Intern &copy)
{
    *this = copy;
}
Intern& Intern:: operator=(const Intern &rf)
{
    if(this != &rf)
    {
        for(int i = 0; i < 3;i++){
            this->Form[i] = rf.Form[i];
        }
    }
    return *this;
}

AForm *Intern::createShrubberyCreationForm(std::string Target)
{
    return new ShrubberyCreationForm(Target);
}

AForm *Intern::createRobotomyRequestForm(std::string Target)
{
    return new RobotomyRequestForm(Target);
}

AForm *Intern::createPresidentialPardonForm(std::string Target)
{
    return new PresidentialPardonForm(Target);
}

AForm *Intern::makeForm(std::string NameForm,std::string Target)
{
    Intern intern;
    std::string Forms[3] = {"ShrubberyCreationForm","RobotomyRequestForm","PresidentialPardonForm"};
    if(Forms[0] == NameForm)
    {
        std::cout << "Intern creates" ;
        return(intern.createShrubberyCreationForm(Target));
    }
    else if(Forms[1] == NameForm)
    {
        std::cout << "Intern creates" ;
        return(intern.createRobotomyRequestForm(Target));
    }
    else if(Forms[2] == NameForm)
    {
        std::cout << "Intern creates" ;
        return(intern.createPresidentialPardonForm(Target));
    }
    else
        std::cout << "enter a valid name form" << std::endl;
    return NULL;
}