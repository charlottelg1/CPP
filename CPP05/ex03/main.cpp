# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"
# include "Intern.hpp"

int	main(void)
{
	Intern	John;
	AForm	*shruby;
	AForm	*roby;
	AForm	*prezy;
	AForm	*unvalidy;

	std::cout << std::endl;

	shruby = John.makeForm("ShrubberyCreationForm", "jardin");
	std::cout << *shruby;
	roby = John.makeForm("RobotomyRequestForm", "john");
	std::cout << *roby;
	prezy = John.makeForm("PresidentialPardonForm", "An innocent");
	std::cout << *prezy;
	unvalidy = John.makeForm("UnvalidForm", "unvalidy");

	Bureaucrat	Jeannine("Jeannine", 2);

	std::cout << std::endl;

	Jeannine.signForm(*prezy);
	Jeannine.executeForm(*prezy);

	std::cout << std::endl;

	delete shruby;
	delete roby;
	delete prezy;
	delete unvalidy;

	return (0);
}