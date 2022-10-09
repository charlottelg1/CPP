#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdlib.h>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private :
        std::string const 	_name;
		bool				_signed;
		int	const			_gradeToSign;
		int	const			_gradeToExecute;

    public :
        Form();
		Form(std::string name, int toSign, int toExecute);
        Form(Form const & src);
        virtual ~Form();
        
        Form & operator=(Form const & rhs);

		std::string const 	getName() const;
		bool 				getSigned() const;
		int 				getGradeToSign() const;
		int 				getGradeToExecute() const;

		void				beSigned(Bureaucrat & signer);

		class GradeTooLowException : public std::exception
		{
			public :
				virtual const char* what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public : 
				virtual const char* what() const throw();
		};
};

std::ostream & operator<<(std::ostream & o, Form const &rhs);

#endif