#include "PresidentialPardonForm.hpp"

// Constructors
PresidentialPardonForm::PresidentialPardonForm() : AForm("Default_Prez", 25, 5)
{
	std::cout << "\e[0;33mDefault Constructor called of PresidentialPardonForm\e[0m" << std::endl;
	setSigned(false);
	setTarget("Default Target");
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of PresidentialPardonForm\e[0m" << std::endl;
	*this = copy;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target + "-prez", 25, 5)
{
	std::cout << "\e[0;33mNaming Constructor called of PresidentialPardonForm\e[0m" << std::endl;
	setTarget(target);
	setSigned(false);
}


// Destructor
PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "\e[0;31mDestructor called of PresidentialPardonForm\e[0m" << std::endl;
}


// Operators
PresidentialPardonForm & PresidentialPardonForm::operator=(const PresidentialPardonForm &rhs)
{
	setSigned(rhs.getSigned());
	return *this;
}

// Members
void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	(void)executor;
	std::cout << getTarget() << " received Zaphod Beeblebrox pardon, youpi !" << std::endl;
}
