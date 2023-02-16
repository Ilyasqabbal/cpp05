/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/01 13:19:27 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/16 04:33:51 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
 
    //ex01
    try
	{
		Form a("chahadat sokna",150);
        std::cout << a <<std::endl;
		Bureaucrat b("a5enoch", 19);
		b.signForm(a);
        std::cout << "\n--------\n\n";
        std::cout << a <<std::endl;
        
	}
	catch (const std::exception &e)
	{
		std::cerr << e.what() << '\n';
	}
}