/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/05 01:17:05 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 05:36:28 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include "AForm.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public AForm{
    private:
        std::string Target;
    public:
        //canonical form
        PresidentialPardonForm();
        PresidentialPardonForm(std::string Target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm &copy);
        PresidentialPardonForm &operator=(const PresidentialPardonForm &rf);

        //exception
        class GradeTooHighException : public	std::exception{
	        const char* what() const throw();
	    };

	    class FormNotSigned : public std::exception{
	        const char* what() const throw();
	    };

        //execute function
        void execute(Bureaucrat const & executor) const;
};

#endif