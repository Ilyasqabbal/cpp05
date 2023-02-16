/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:49:13 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 03:33:00 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class Bureaucrat{
    private:
        const std::string name;
        int grade;
    public: 
    //
    Bureaucrat(std::string name,int grade);
    ~Bureaucrat();
    Bureaucrat(const  Bureaucrat &copy);
    Bureaucrat &operator=( Bureaucrat const &rf);

    //getter
    std::string getName()const;
    int getGrade()const;    
    //setters
    void setGrade(int grade);
    //increment
    void increment();
    //decrement
    void decrement();
    
    void   signForm( AForm& AForm_ );
    void   executeForm(AForm const &AForm_);
    //exception


class GradeTooHighException : public std::exception {
    const char* what() const throw();
};

class GradeTooLowException : public std::exception {
    const char* what() const throw();
};

class Invalid : public std::exception {
    const char* what() const throw();
};
   
};
std::ostream &operator<<(std::ostream &output,const Bureaucrat &b1);

#endif
//2.33