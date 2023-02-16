/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:19:27 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 05:30:16 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"

int main()
{
    try
	{
		Bureaucrat worker("worker", 149);
		Intern someRandomIntern;
		AForm* rrf;
		rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
		rrf->execute(worker);

		worker.signForm(*rrf);
		worker.executeForm(*rrf);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
