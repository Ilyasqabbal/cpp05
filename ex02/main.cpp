/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:19:27 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 03:58:43 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
//#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
 
	try {
        AForm *form = new ShrubberyCreationForm("home");
        Bureaucrat b1("Aabbass", 137);
        Bureaucrat b2("Bouchaib", 144);
        b2.signForm(*form);
        b1.executeForm(*form);

        b2.executeForm(*form);
        delete form;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
    try {
        AForm *form = new RobotomyRequestForm("home");
        Bureaucrat b1("Aabbass", 44);
        Bureaucrat b2("Bouchaib", 72);
        b2.signForm(*form);
        b1.executeForm(*form);

        b2.executeForm(*form);
        delete form;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
}