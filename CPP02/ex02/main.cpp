#include "Fixed.hpp"

int main( void ) 
{
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    
    std::cout << b << std::endl;
    
    std::cout << Fixed::max( a, b ) << std::endl;

    std::cout << std::endl;

    Fixed   c(42);
    Fixed   d;

    d = c + 6;

    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "c bigger ? " << (c>d) << std::endl;
    std::cout << "c smaller ? " << (c<d) << std::endl;
    std::cout << "c and d equal ? " << (c==d) << std::endl;
    std::cout << "add " << (c+d) << std::endl;
    std::cout << "minus " << (c-d) << std::endl;
    std::cout << "multiply " << (c*d) << std::endl;
    std::cout << "divide " << (c/d) << std::endl;
    std::cout << "min " << Fixed::min(c,d) << std::endl;
    std::cout << "max " << Fixed::max(c,d) << std::endl;

    return 0;
}