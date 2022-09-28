#include "Dog.hpp"

Dog::Dog()
{
    std::cout << "Dog default constructor called" << std::endl;
    type = "Dog";
    _DogBrain = new Brain();
}

Dog::Dog(Dog & src)
{
    std::cout << "Dog copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
	delete _DogBrain;
    std::cout << "Dog destructor called" << std::endl;
}

Dog & Dog::operator=(Dog const & rhs)
{
    std::cout << "Dog assignment operator called" << std::endl;
    if (this != &rhs)
    {
        type = rhs.type;
        *(_DogBrain) = *(rhs._DogBrain);
    }
    return (*this);
}

void    Dog::makeSound() const
{
    std::cout << "Ouaf !" << std::endl;
}

Brain   *Dog::getBrain() const
{
    return (_DogBrain);
}