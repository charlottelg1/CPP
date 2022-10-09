#include "AForm.hpp"

AForm::AForm() : _name("Default Form"), _signed(false), _gradeToSign((rand() % 151)),_gradeToExecute(1 + (rand() % 151))
{
    // std::cout << "Form default constructor called" << std::endl;
}

AForm::AForm(std::string name, int toSign, int toExecute) : _name(name), _signed(false), _gradeToSign(toSign), _gradeToExecute(toExecute)
{
    // std::cout << "Form name & grade constructor called" << std::endl;
	if (toSign < 1)
		throw AForm::GradeTooHighException();
	else if (toSign > 150)
		throw AForm::GradeTooLowException();
	
	if (toExecute < 1)
		throw AForm::GradeTooHighException();
	else if (toExecute > 150)
		throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const & src) : _name(src.getName()), _signed(src.getSigned()), _gradeToSign(src.getGradeToSign()), _gradeToExecute(getGradeToExecute())
{
    // std::cout << "Form copy constructor called" << std::endl;
}

AForm::~AForm()
{
    // std::cout << "Form destructor called" << std::endl;
}

AForm & AForm::operator=(AForm const & rhs)
{
    // std::cout << "Form assignment operator called" << std::endl;
    if (this != &rhs)
    {
		_signed = rhs._signed;
	}
    return (*this);
}

std::ostream & operator<<(std::ostream & o, AForm const &rhs)
{
	std::cout << std::endl;
    o << rhs.getName() << " informations" << std::endl;
	o << "   Signed : " << rhs.getSigned() << std::endl;
	o << "   Grade to sign : " << rhs.getGradeToSign() << std::endl;
	o << "   Grade to exectute : " << rhs.getGradeToExecute() << std::endl;
	std::cout << std::endl;

    return (o);
}

std::string const 	AForm::getName() const
{
	return (_name);
}

bool AForm::getSigned() const
{
	return (_signed);
}
int AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

std::string AForm::getTarget() const
{
	return (_target);
}

void AForm::setSigned(bool is_signed) 
{
	_signed = is_signed;
}

void AForm::setTarget(std::string target)
{
	_target = target;
}

void AForm::beSigned(Bureaucrat & signer)
{
	try
	{
		if (_signed)
			std::cout << signer.getName() << " couldn't sign " << _name << " because it's already signed" << std::endl;
		else if (signer.getGrade() > this->_gradeToSign)
			throw AForm::GradeTooLowException();
		else 
		{
			std::cout << signer.getName() << " signed " << _name << std::endl;
			this->_signed = true;
		}		
	}
	catch (GradeTooLowException & e)
	{
		std::cout << signer.getName() << " couldn't sign " << _name << " because " ;
		std::cerr << e.what() << std::endl;
	}	
}

void	AForm::beExecuted(Bureaucrat & executor) const
{
	try
	{
		if (!_signed)
			std::cout << executor.getName() << " couldn't execute " << getName() << " because it's not signed" << std::endl;
		else if (executor.getGrade() > this->_gradeToExecute)
			throw AForm::GradeTooLowException();
		else 
		{
			std::cout << executor.getName() << " executed " << this->_name << std::endl;
			this->execute(executor);
		}		
	}
	catch (GradeTooLowException & e)
	{
		std::cout << executor.getName() << " couldn't execute " << this->_name << " because " ;
		std::cerr << e.what() << std::endl;
	}	
}

char const	*AForm::GradeTooHighException::what(void) const throw()
{
	return ("Grade too high...");
}

char const	*AForm::GradeTooLowException::what(void) const throw()
{
	return ("Grade too low ...");
}

