/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/06 00:27:19 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 05:44:54 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern{
    private:
    AForm *Form[3];
    public:
    Intern();
    ~Intern();
    Intern(const Intern &copy);
    Intern&operator=(const Intern &rf);

    AForm *createShrubberyCreationForm(std::string Target);
    AForm *createRobotomyRequestForm(std::string Target);
    AForm *createPresidentialPardonForm(std::string Target);
    //functions
    AForm *makeForm(std::string NameForm,std::string Target);
};

#endif
