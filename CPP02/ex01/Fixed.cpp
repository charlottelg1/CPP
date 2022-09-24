#include "Fixed.hpp"

Fixed::Fixed()
{
    std::cout << "Default constructor called" << std::endl;
    _fix = 0;
}

Fixed::Fixed(Fixed const & src)
{
    std::cout << "Copy constructor called" << std::endl;
    *this = src;
    return;
}

Fixed::Fixed(int const const_int) // convertit entier constant en virgule fixe
{
    std::cout << "Int constructor called" << std::endl;
	this->_fix = const_int << this->_bits;
	return ;
}

Fixed::Fixed(float const const_float) //convertit flottant constant en virgule fixe
{
    std::cout << "Float constructor called" << std::endl;
	this->_fix = roundf(const_float * (float)(1 << this->_bits));
 	return ;
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
    return (_fix);
}

void Fixed::setRawBits( int const raw )
{
    _fix = raw;
}

float Fixed::toFloat( void ) const //convertit la valeur en virgule fixe en virgule flottante
{
    return ((float) this->_fix / (float)(1 << this->_bits));
}

int Fixed::toInt( void ) const //convertit la valeur en firgule fixe en nombre entier
{
    return (this->_fix >> this->_bits);
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}