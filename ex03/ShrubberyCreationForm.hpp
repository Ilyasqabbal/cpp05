/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/03 01:23:03 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 05:38:15 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm 
{
    private:
        std::string Target;
    public:
    //canonical form classe
    ShrubberyCreationForm();
    ~ShrubberyCreationForm();
    ShrubberyCreationForm(std::string Target);
    ShrubberyCreationForm(const ShrubberyCreationForm &copy);
    ShrubberyCreationForm &operator=(ShrubberyCreationForm &rf);
    void        execute(Bureaucrat const & executor) const;


    //exception
    class GradeTooHighException : public std::exception{
	    const char* what() const throw();
	};

	class FormNotSigned : public std::exception{
	    const char* what() const throw();
	};
    
        
};

#endif

