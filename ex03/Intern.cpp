/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 00:27:16 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 06:07:28 by iqabbal          ###   ########.fr       */
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
    int i = -1;
    while(++i < 3 && NameForm != Forms[i])
    {
        
    }
    switch (i)
    {
        case 0 :
            std::cout << "Intern creates" ;
            return(intern.createShrubberyCreationForm(Target));
            break;
        case 1 :
            std::cout << "Intern creates" ;
            return(intern.createRobotomyRequestForm(Target));
            break;
        case 2 :
            std::cout << "Intern creates" ;
            return(intern.createPresidentialPardonForm(Target));
            break;
        default :
            std::cout << "enter a valid form name" << std::endl;
    }
    return NULL;
}