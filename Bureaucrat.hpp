/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 12:49:13 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/14 13:34:51 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>

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
    //exception

    //increment
    void increment();
    //decrement
    void decrement();
    
};

#endif