
#include <iostream>
#include "AForm.hpp"

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
        
};



