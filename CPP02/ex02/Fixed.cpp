#include "Fixed.hpp"

/* CCONSTRUCTEURS */

Fixed::Fixed() : _fix (0) {}

Fixed::Fixed(Fixed const & src)
{
    *this = src;
    return;
}

Fixed::Fixed(int const const_int)
{
	this->_fix = const_int << this->_bits;
	return ;
}

Fixed::Fixed(float const const_float)
{
	this->_fix = roundf(const_float * (float)(1 << this->_bits));
 	return ;
}

/* DESTRUCTEUR */

Fixed::~Fixed(){}

/* SURCHARGE D'OPERATEURS */

Fixed & Fixed::operator=(Fixed const & rhs)
{
    if (this != &rhs)
        this->_fix = rhs.getRawBits();
    return (*this);
}

bool Fixed::operator<(Fixed const & rhs) const
{
    if (this->_fix < rhs.getRawBits())
        return(true);
    return(false);
}

bool Fixed::operator>(Fixed const & rhs) const
{
    if (this->_fix > rhs.getRawBits())
        return(true);
    return(false);
}

bool Fixed::operator<=(Fixed const & rhs) const
{
   if (this->_fix <= rhs.getRawBits())
        return(true);
    return(false); 
}
bool Fixed::operator>=(Fixed const & rhs) const
{
    if (this->_fix >= rhs.getRawBits())
        return(true);
    return(false);
}

bool Fixed::operator==(Fixed const & rhs) const
{
    if (this->_fix == rhs.getRawBits())
        return(true);
    return(false);
}
bool Fixed::operator!=(Fixed const & rhs) const
{
    if (this->_fix != rhs.getRawBits())
        return(true);
    return(false);
}

Fixed Fixed::operator+(Fixed const & rhs) const
{
    return(Fixed(this->toFloat() + rhs.toFloat()));
}

Fixed Fixed::operator-(Fixed const & rhs) const
{
    return(Fixed(this->toFloat() - rhs.toFloat()));
}

Fixed Fixed::operator*(Fixed const & rhs) const
{
    // std::cout << "surcharge d'operateur called" << std::endl;
    return(Fixed(this->toFloat() * rhs.toFloat()));
}

Fixed Fixed::operator/(Fixed const & rhs) const
{
    return(Fixed(this->toFloat() / rhs.toFloat()));
}

Fixed & Fixed::operator++(void)
{
    this->_fix++;
	return (*this);
}
Fixed Fixed::operator++(int)
{
   Fixed	fixed = *this;
   
   this->_fix++;
   return (fixed); 
}

Fixed & Fixed::operator--(void)
{
    this->_fix--;
    return(*this);
}

Fixed Fixed::operator--(int)
{   
    Fixed   fixed = *this;
    
    this->_fix--;
    return(fixed);
}

std::ostream & operator<<(std::ostream & o, Fixed const &rhs)
{
    o << rhs.toFloat();
    return (o);
}

/* MEMBRES */

int Fixed::getRawBits( void ) const
{
    return (_fix);
}

void Fixed::setRawBits( int const raw )
{
    _fix = raw;
}

float Fixed::toFloat( void ) const
{
    return ((float) this->_fix / (float)(1 << this->_bits));
}

int Fixed::toInt( void ) const
{
    return (this->_fix >> this->_bits);
}

Fixed &  Fixed::min(Fixed &a, Fixed &b)
{
    if (a < b)
        return(a);
    return(b);
}

Fixed const &  Fixed::min(Fixed const &a, Fixed const &b)
{
    if (a < b)
        return(a);
    return(b);
}

Fixed &  Fixed::max(Fixed &a, Fixed &b)
{
    if (a > b)
        return(a);
    return(b);
}

Fixed const &  Fixed::max(Fixed const &a, Fixed const &b)
{
    if (a > b)
        return(a);
    return(b);
}