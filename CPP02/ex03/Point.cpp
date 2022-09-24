#include "Point.hpp"

Point::Point() : _x(0), _y(0) {}

Point::Point(Point const &src) : _x(src.get_x()), _y(src.get_y()){}

Point & Point::operator=(Point const &rhs)
{
    (void)rhs;
    return (*this);
}

Point::~Point(){}

Point::Point(float const x, float const y) : _x(Fixed(x)), _y(Fixed(y)) {

	return ;
}

Fixed Point::get_x() const
{
    return (_x);
}

Fixed Point::get_y() const
{
    return(_y);
}