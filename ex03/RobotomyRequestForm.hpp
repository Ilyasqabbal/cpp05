/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/04 02:54:38 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 05:37:28 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{   
    
    private:
        std::string Target;
    public:
    //canonical Form
        RobotomyRequestForm();
        RobotomyRequestForm(std::string targert);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm &copy);
        RobotomyRequestForm &operator=(const RobotomyRequestForm &rf);
        
    //function required to be overloaed
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
