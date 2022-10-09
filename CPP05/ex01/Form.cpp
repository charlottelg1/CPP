#include "Form.hpp"

Form::Form() : _name("Default Form"), _signed(false), _gradeToSign((rand() % 151)),_gradeToExecute(1 + (rand() % 151))
{
    // std::cout << "Form default constructor called" << std::endl;
}

Form::Form(std::string name, int toSign, int toExecute) : _name(name), _signed(false), _gradeToSign(toSign), _gradeToExecute(toExecute)
{
    // std::cout << "Form name & grade constructor called" << std::endl;
	if (toSign < 1)
		throw Form::GradeTooHighException();
	else if (toSign > 150)
		throw Form::GradeTooLowException();
	
	if (toExecute < 1)
		throw Form::GradeTooHighException();
	else if (toExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(Form const & src) : _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(getGradeToExecute())
{
    // std::cout << "Form copy constructor called" << std::endl;
}

Form::~Form()
{
    // std::cout << "Form destructor called" << std::endl;
}

Form & Form::operator=(Form const & rhs)
{
    // std::cout << "Form assignment operator called" << std::endl;
    if (this != &rhs)
    {
		_signed = rhs._signed;
	}
    return (*this);
}

std::ostream & operator<<(std::ostream & o, Form const &rhs)
{
	std::cout << std::endl;
    o << rhs.getName() << " informations" << std::endl;
	o << "   Signed : " << rhs.getSigned() << std::endl;
	o << "   Grade to sign : " << rhs.getGradeToSign() << std::endl;
	o << "   Grade to exectute : " << rhs.getGradeToExecute() << std::endl;
	std::cout << std::endl;

    return (o);
}

std::string const 	Form::getName() const
{
	return (_name);
}

bool Form::getSigned() const
{
	return (_signed);
}
int Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void Form::beSigned(Bureaucrat & signer)
{
	try
	{
		if (_signed)
			std::cout << signer.getName() << " couldn't sign " << _name << " because it's already signed" << std::endl;
		else if (signer.getGrade() > this->_gradeToSign)
			throw Form::GradeTooLowException();
		else 
		{
			this->_signed = true;
			std::cout << signer.getName() << " signed " << _name << std::endl;
		}		
	}
	catch (GradeTooLowException & e)
	{
		std::cout << signer.getName() << " couldn't sign " << _name << " because " ;
		std::cerr << e.what() << std::endl;
	}	
}

char const	*Form::GradeTooHighException::what(void) const throw()
{
	return ("Form grade too high...");
}

char const	*Form::GradeTooLowException::what(void) const throw()
{
	return ("Form grade too low ...");
}
