# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	Bureaucrat	bruno("Bruno", 75);
	Bureaucrat	raoul("Raoul", 116);
	Bureaucrat	jeannine("Jeannine", 1);

	AForm *shrub = new ShrubberyCreationForm("coucou");
	bruno.executeForm(*shrub);
	shrub->beExecuted(bruno);
	bruno.signForm(*shrub);
	shrub->beExecuted(bruno);
	delete shrub;

	AForm *robot = new RobotomyRequestForm("robot");
	bruno.executeForm(*robot);
	robot->beExecuted(bruno);
	jeannine.signForm(*robot);
	robot->beExecuted(jeannine);
	robot->beExecuted(jeannine);
	robot->beExecuted(raoul);
	robot->beExecuted(jeannine);
	robot->beExecuted(bruno);
	robot->beExecuted(jeannine);
	robot->beExecuted(jeannine);
	robot->beExecuted(jeannine);
	delete robot;

	AForm *prez = new PresidentialPardonForm("You");
	jeannine.signForm(*prez);
	prez->beExecuted(jeannine);
	delete prez;
	
	return (0);
}