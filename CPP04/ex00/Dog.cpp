#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog";
}

Dog::Dog(Dog & src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &rhs)
    {
        type = rhs.type;
    }
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Ouaf !" << std::endl;
}
