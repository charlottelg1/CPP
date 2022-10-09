#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include <stdlib.h>
#include <ostream>
#include <string>
#include <fstream>
#include <cstring>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private :
        std::string const	_name;
		bool				_signed;
		int const			_gradeToSign;
		int const			_gradeToExecute;
		std::string			_target;

    public :
        AForm();
		AForm(std::string name, int toSign, int toExecute);
		AForm(std::string name, int grade);
        AForm(AForm const & src);
        virtual ~AForm() = 0;
        
        AForm & operator=(AForm const & rhs);

		virtual std::string const 	getName() const;
		bool 				getSigned() const;
		int 				getGradeToSign() const;
		int 				getGradeToExecute() const;
		std::string 	 	getTarget() const;

		void 				setSigned(bool is_signed);
		void	 			setTarget(std::string target);

		void				beSigned(Bureaucrat & signer);
		void 				beExecuted(Bureaucrat & executor) const;
		virtual void		execute(Bureaucrat const & executor) const = 0;

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

std::ostream & operator<<(std::ostream & o, AForm const &rhs);

#endif