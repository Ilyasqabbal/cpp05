/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/14 13:19:27 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/14 13:30:50 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat b1("an@s",80);
    Bureaucrat b2(b1);
    b1 = b2;
    
    std::cout << b1.getName() << std::endl;
    std::cout << b1.getGrade() << std::endl;
}