#include "Intern.hpp"

// Constructors
Intern::Intern()
{
	std::cout << "\e[0;33mDefault Constructor called of Intern\e[0m" << std::endl;
}

Intern::Intern(const Intern &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Intern\e[0m" << std::endl;
}


// Destructor
Intern::~Intern()
{
	std::cout << "\e[0;31mDestructor called of Intern\e[0m" << std::endl;
}


// Operators
Intern & Intern::operator=(const Intern &assign)
{
	(void) assign;
	return *this;
}

// Members
AForm	*Intern::makeForm(std::string name, std::string target)
{
	int		i = 0;

	FormType	tab[] = 
	{
		{"ShrubberyCreationForm", &Intern::shrubMaker},
		{"RobotomyRequestForm", &Intern::robotMaker},
		{"PresidentialPardonForm", &Intern::prezMaker}
	};
	while (i < 3)
	{
		if (tab[i].formType == name)
		{
			std::cout << "Intern creates " << name << " " << target << std::endl;
			return (this->*tab[i].f)(target);
		}
		i++;
	}
	std::cerr << name << " is not a valid form type" << std::endl;
	return (NULL);
}

AForm	*Intern::shrubMaker(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm	*Intern::robotMaker(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm	*Intern::prezMaker(std::string target)
{
	return (new PresidentialPardonForm(target));
}
