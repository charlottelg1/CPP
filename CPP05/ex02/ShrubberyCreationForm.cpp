#include "ShrubberyCreationForm.hpp"

// Constructors
ShrubberyCreationForm::ShrubberyCreationForm() : AForm("Default Shrub", 145,137)
{
	std::cout << "\e[0;33mDefault Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
	setSigned(false);
	setTarget("Default Target");
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
{
	*this = copy;
	std::cout << "\e[0;33mCopy Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm(target + "-shrub", 145,137)
{
	std::cout << "\e[0;33mNaming Constructor called of ShrubberyCreationForm\e[0m" << std::endl;
	setTarget(target + "_shrubbery");
	setSigned(false);
}

// Destructor
ShrubberyCreationForm::~ShrubberyCreationForm()
{
	std::cout << "\e[0;31mDestructor called of ShrubberyCreationForm\e[0m" << std::endl;
}


// Operators
ShrubberyCreationForm & ShrubberyCreationForm::operator=(const ShrubberyCreationForm &rhs)
{
	setTarget(rhs.getTarget());
	setSigned(rhs.getSigned());
	return *this;
}

//Members
void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	(void)executor;
	char 	file_out[getTarget().size()];
	strcpy(file_out, getTarget().c_str());
	
	std::ofstream	ofs(file_out);
	if (ofs.fail())
		throw ShrubberyCreationForm::FailShrubbery();
	ofs << "                 o                    " << std::endl;
	ofs << "                ooo                   " << std::endl;
	ofs << "               ooooo                  " << std::endl;
	ofs << "              ooooooo    ||           " << std::endl;
	ofs << "             ooooooooo  ||||          " << std::endl;
	ofs << "              ooooooo  ||||||         " << std::endl;
	ofs << "             ooooooooo||||||||        " << std::endl;
	ofs << "            ooooooooooo |||||         " << std::endl;
	ofs << "           ooooooooooooo |||||        " << std::endl;
	ofs << "          ooooooooooooooo |||||       " << std::endl;
	ofs << "           ooooooooooooo |||||||      " << std::endl;
	ofs << "          ooooooooooooooo |||||||     " << std::endl;
	ofs << "         ooooooooooooooooo |||||      " << std::endl;
	ofs << "        ooooooooooooooooooo |||||     " << std::endl;
	ofs << "       ooooooooooooooooooooo |||||    " << std::endl;
	ofs << "      ooooooooooooooooooooooo |||||   " << std::endl;
	ofs << "                ooo      |||          " << std::endl;
	ofs << "                ooo      |||          " << std::endl;
	ofs << "                ooo      |||          " << std::endl;
	ofs.close();
	std::cout << getTarget() << " has been created with an ascii forest" << std::endl;
}

char const	*ShrubberyCreationForm::FailShrubbery::what(void) const throw() {

	return ("failed to create Shrubbery file");
}