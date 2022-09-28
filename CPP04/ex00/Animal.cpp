#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor called" << std::endl;
    type = "Animal";
}

Animal::Animal(Animal const & src)
{
    std::cout << "Animal copy constructor called" << std::endl;
    *this = src;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called" << std::endl;
}

Animal & Animal::operator=(Animal const & rhs)
{
    std::cout << "Animal assignment operator called" << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return (*this);
}

void    Animal::makeSound() const
{
    std::cout << "Animal sound !" << std::endl;
}

std::string const     Animal::getType() const
{
    return (type);
}