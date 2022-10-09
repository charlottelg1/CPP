#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdlib.h>

class Bureaucrat
{
    private :
        std::string const	_name ;
		int					_grade;

    public :
        Bureaucrat();
		Bureaucrat(std::string name, int grade);
        Bureaucrat(Bureaucrat const & src);
        virtual ~Bureaucrat();
        
        Bureaucrat & operator=(Bureaucrat const & rhs);

		std::string const 	getName() const;
		int 				getGrade() const;
		void				increment_grade();
		void				decrement_grade();

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

std::ostream & operator<<(std::ostream & o, Bureaucrat const &rhs);

#endif