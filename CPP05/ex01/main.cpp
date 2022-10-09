#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try
	{
		Form		pacs("Pacs", 36, 5);
		Bureaucrat 	bruno("Bruno", 25);
		
		std::cout << pacs;
		bruno.signForm(pacs);
		std::cout << pacs;
		pacs.beSigned(bruno);
		std::cout << pacs;
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}	
	catch (Form::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}	
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Form		pacs("Pacs", 153, 5);
		Bureaucrat 	bruno("Bruno", 25);
	}
	catch (Form::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}	
	catch (Form::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cerr << e.what() << std::endl;
	}	
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}