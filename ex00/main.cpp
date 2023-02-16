/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:19:27 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 04:18:15 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    try
    {
       Bureaucrat b1("N@me",150);
       Bureaucrat b2(b1);
       b1 = b2;
       Bureaucrat b3("gogo",1);
    
        std::cout << b1.getName() << std::endl;
        std::cout << b1.getGrade() << std::endl;

        std::cout <<"Bureaucrat name : "<< b1.getName() << "       Bureaucrat grade : "<< b1.getGrade() << std::endl;
        std::cout <<"Bureaucrat name : "<< b3.getName() << "       Bureaucrat grade : "<< b3.getGrade() << std::endl;

        
        std::cout << std::endl << b1 << std::endl;
        std::cout << b2 << std::endl;
        //b3.increment();
        b1.decrement();
        std::cout << b1.getGrade() << std::endl;

    }
    catch(const std::exception& e)
    {
       std::cerr << e.what() << std::endl;
    }
}