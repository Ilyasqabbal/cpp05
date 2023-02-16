/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:19:27 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 04:27:27 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

int main()
{
 
	std::cout << "\n\n-------------------------------------------\n\n";

	
	try {
        AForm *form = new ShrubberyCreationForm("home");
        Bureaucrat b1("lo2@y", 137);
        Bureaucrat b2("z@yn", 144);
        b2.signForm(*form);
        b1.executeForm(*form);

        b2.executeForm(*form);
        delete form;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }
	
	std::cout << "\n\n-------------------------------------------\n\n";
	
    try {
        AForm *form = new RobotomyRequestForm("home");
        Bureaucrat b1("3@mer", 44);
        Bureaucrat b2("dizzy dross", 72);
        b2.signForm(*form);
        b1.executeForm(*form);

        b2.executeForm(*form);
        delete form;
    }
    catch (std::exception & e) {
        std::cout << e.what() << std::endl;
    }

	std::cout << "\n\n-------------------------------------------\n\n";
	
	try {
        AForm *form = new PresidentialPardonForm("home");
        Bureaucrat b1("lbenj", 5);
        Bureaucrat b2("ily@s", 24);
        b2.signForm(*form);
        b1.executeForm(*form);

        b2.executeForm(*form);
        delete form;
    }
    catch (std::exception & e) {
        std::cout << "Exception: " << e.what() << std::endl;
    }
	
	std::cout << "\n\n-------------------------------------------\n\n";
	
}
