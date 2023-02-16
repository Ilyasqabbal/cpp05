/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iqabbal <iqabbal@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/02 00:45:08 by iqabbal           #+#    #+#             */
/*   Updated: 2023/02/15 23:50:01 by iqabbal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>

class Bureaucrat;
class AForm {
  private:
    const std::string Name;
    const int GradeToSign;
    const int GradeToExecute;
    bool Signed;
    
    
  
  public: 
    virtual ~AForm();
    AForm(std::string _Name,int _GradeToSign, int _GradeToExecute);
    AForm(const AForm &copy);
    AForm &operator=(const AForm &rf);

    std::string get_Name() const;
    bool        get_Signed() const;
    int         get_GradeToSign() const;
    int         get_GradeToExecute() const;

    void                beSigned(Bureaucrat& bureaucrat );
    virtual void        execute(Bureaucrat const & executor) const = 0;


class GradeTooHighException : public std::exception {
    public:
    const char* what() const throw();
};

class GradeTooLowException : public std::exception {
    public:
    const char* what() const throw();
};
 
};
std::ostream &operator<<(std::ostream &output,const AForm &AForm);
#endif