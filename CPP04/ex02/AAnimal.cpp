#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal default constructor called" << std::endl;
    type = "AAnimal";
}

AAnimal::AAnimal(AAnimal const & src)
{
    std::cout << "AAnimal copy constructor called" << std::endl;
    *this = src;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal & AAnimal::operator=(AAnimal const & rhs)
{
    std::cout << "AAnimal assignment operator called" << std::endl;
    if (this != &rhs)
        type = rhs.type;
    return (*this);
}

std::string const     AAnimal::getType() const
{
    return (type);
}
