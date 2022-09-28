#include "Cat.hpp"

Cat::Cat()
{
    std::cout << "Cat default constructor called" << std::endl;
    type = "Cat";
}

Cat::Cat(Cat & src)
{
    std::cout << "Cat copy constructor called" << std::endl;
    *this = src;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called" << std::endl;
}

Cat & Cat::operator=(Cat const & rhs)
{
    std::cout << "Cat assignment operator called" << std::endl;
    if (this != &rhs)
    {
        type = rhs.type;
    }
    return (*this);
}

void    Cat::makeSound() const
{
    std::cout << "Miaou !" << std::endl;
}
