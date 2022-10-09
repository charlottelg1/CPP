#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>

# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
	public:
		// Constructors
		Intern();
		Intern(const Intern &copy);
		
		// Destructor
		virtual ~Intern();
		
		// Operators
		Intern & operator=(const Intern &assign); 

		// Members
		AForm	*makeForm(std::string name, std::string target);
		AForm	*shrubMaker(std::string target);
		AForm	*robotMaker(std::string target);
		AForm	*prezMaker(std::string target);
};

typedef struct {
	std::string	formType;
	AForm	*(Intern::*f)(std::string);
}	FormType;

#endif