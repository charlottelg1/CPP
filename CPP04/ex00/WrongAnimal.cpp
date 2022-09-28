#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal default constructor called" << std::endl;
    type = "WrongAnimal";
}

WrongAnimal::WrongAnimal(WrongAnimal const & src)
{
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    *this = src;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal & WrongAnimal::operator=(WrongAnimal const & rhs)
{
    std::cout << "WrongAnimal assignment operator called" << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return (*this);
}

void    WrongAnimal::makeSound() const
{
    std::cout << "WrongAnimal sound !" << std::endl;
}

std::string const     WrongAnimal::getType() const
{
    return (type);
}