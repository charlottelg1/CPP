#include "RobotomyRequestForm.hpp"

// Constructors
RobotomyRequestForm::RobotomyRequestForm() : AForm("Default_Robot", 72, 45)
{
	std::cout << "\e[0;33mDefault Constructor called of RobotomyRequestForm\e[0m" << std::endl;
	setSigned(false);
	setTarget("Default Target");
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
{
	std::cout << "\e[0;33mCopy Constructor called of RobotomyRequestForm\e[0m" << std::endl;
	*this = copy;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target + "-robot", 72, 45)
{
	std::cout << "\e[0;33mNaming Constructor called of RobotomyRequestForm\e[0m" << std::endl;
	setTarget(target);
	setSigned(false);
}

// Destructor
RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "\e[0;31mDestructor called of RobotomyRequestForm\e[0m" << std::endl;
}

// Operators
RobotomyRequestForm & RobotomyRequestForm::operator=(const RobotomyRequestForm &rhs)
{
	setTarget(rhs.getTarget());
	setSigned(rhs.getSigned());
	return *this;
}

// Members
void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	(void)executor;
	std::cout << "BrZSrzrWzrzRIIiiIIng !!! " << std::endl;
	try
	{
		if ((std::rand() % 2) == 0)
			throw RobotomyRequestForm::FailRobotomy();
		else
			std::cout << getTarget() << " has been successfuly robotomized !" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

char const	*RobotomyRequestForm::FailRobotomy::what(void) const throw() {

	return ("Robotomy failed ...");
}
