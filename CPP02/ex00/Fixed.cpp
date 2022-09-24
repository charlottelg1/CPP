#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _fix = 0;
}

Fixed::Fixed(Fixed & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed & Fixed::operator=(Fixed const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        this->_fix = rhs.getRawBits();
    return (*this);
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (_fix);
}

void Fixed::setRawBits( int const raw )
{
    _fix = raw;
}
