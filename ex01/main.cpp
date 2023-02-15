/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:19:27 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/15 00:40:26 by iqabbal          ###   ########.fr       */
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
    
        std::cout << b1.getName() << std::endl;
        std::cout << b1.getGrade() << std::endl;

        b1.decrement();
        std::cout << b1.getGrade() << std::endl;
    }
    catch(const std::exception& e)
    {
       std::cout << e.what() << std::endl;
    }
}