#include "Bureaucrat.hpp"

int	main(void)
{
	try 
	{
		Bureaucrat	bruno("Bruno", 25);
		std::cout << bruno;
		bruno.increment_grade();
		std::cout << bruno;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << " to create Bruno" << std::endl;
	}	
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << " to create Bruno" << std::endl;
	}	
	
	std::cout << std::endl;

	try
	{
		Bureaucrat	didier("Didier", 80);
		std::cout << didier;
		didier.decrement_grade();
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << " to create Lowic" << std::endl;
	}	
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << " to create Lowic" << std::endl;
	}	

	std::cout << std::endl;

	try 
	{
		Bureaucrat low("Lowic", 151);
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << " to create Lowic" << std::endl;
	}	
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << " to create Lowic" << std::endl;
	}	

	try
	{
		Bureaucrat high("Highbert", 0);
		std::cout << high << std::endl;
		high.decrement_grade();
			
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << " to create Highbert" << std::endl;
	}	
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << " to create Highbert" << std::endl;
	}	
	return (0);
}