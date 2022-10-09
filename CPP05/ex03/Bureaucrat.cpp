#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default")
{
    // std::cout << "Bureaucrat default constructor called" << std::endl;
	_grade = 1 + (rand() % 151);
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
    // std::cout << "Bureaucrat name & grade constructor called" << std::endl;
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat(Bureaucrat const & src)
{
    // std::cout << "Bureaucrat copy constructor called" << std::endl;
    *this = src;
}

Bureaucrat::~Bureaucrat()
{
    // std::cout << "Bureaucrat destructor called" << std::endl;
}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const & rhs)
{
    // std::cout << "Bureaucrat assignment operator called" << std::endl;
    if (this != &rhs)
		_grade = rhs._grade;
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Bureaucrat const &rhs)
{
    o << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << std::endl;
    return (o);
}

std::string const 	Bureaucrat::getName() const
{
	return (_name);
}

int Bureaucrat::getGrade() const
{
	return (_grade);
}

void	Bureaucrat::increment_grade()
{
	int	new_grade = this->_grade - 1;

	std::cout << "Incrementing " << _name << "'s grade" <<std::endl;
	try 
	{
		if (new_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (new_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade = new_grade;
	}
	catch (GradeTooLowException & e)
	{
		std::cerr << e.what() << "to increment " << _name << std::endl;
	}	
	catch (GradeTooHighException & e)
	{
		std::cerr << e.what() << "to increment " << _name << std::endl;
	}
}

void	Bureaucrat::decrement_grade()
{
	std::cout << "Decrementing " << _name << "'s grade" <<std::endl;
	int	new_grade = this->_grade + 1;
	try 
	{
		if (new_grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else if (new_grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else
			_grade = new_grade;
	}
	catch (GradeTooLowException & e)
	{
		std::cerr << e.what() << "to decrement " << _name << std::endl;
	}	
	catch (GradeTooHighException & e)
	{
		std::cerr << e.what() << "to decrement " << _name << std::endl;
	}
}

void Bureaucrat::signForm(AForm & form)
{
	form.beSigned(*this);
}

void Bureaucrat::executeForm(AForm const & form)
{
	form.beExecuted(*this);
}

char const	*Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high ...");
}

char const	*Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low ...");
}