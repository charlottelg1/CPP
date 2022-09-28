#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    std::cout << "WrongCat default constructor called" << std::endl;
    type = "WrongCat";
}

WrongCat::WrongCat(WrongCat & src)
{
    std::cout << "WrongCat copy constructor called" << std::endl;
    *this = src;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called" << std::endl;
}

WrongCat & WrongCat::operator=(WrongCat const & rhs)
{
    std::cout << "WrongCat assignment operator called" << std::endl;
    if (this != &rhs)
    {
        type = rhs.type;
    }
    return (*this);
}

void    WrongCat::makeSound() const
{
    std::cout << "Miaou !" << std::endl;
}
