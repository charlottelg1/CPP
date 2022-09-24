#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point 
{
    public :
        Point();                                //constructeur par défaut
        Point(Point const &src);                //constructeur par copie
        Point & operator=(Point const & rhs);   //opérateur d'assignation
        ~Point();                               //destructeur
        
        Point(float const x, float const y);
        
        Fixed   get_x() const;
        Fixed   get_y() const;
        
    private :
        Fixed const _x;
        Fixed const _y; 
};

std::ostream    &operator<<(std::ostream &o, Point const &rhs);
bool            bsp( Point const a, Point const b, Point const c, Point const point);

#endif
