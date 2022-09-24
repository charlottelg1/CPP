#include "Point.hpp"

Fixed	scalar(Point const a, Point const b, Point const c)
{
	return ((a.get_x() - c.get_x()) * (b.get_y() - c.get_y()) - \
			(b.get_x() - c.get_x()) * (a.get_y() - c.get_y()));
}

//dans un espace vectoriel, les scalaires sont les éléments ou peut etre 
//l'ensemble des nombres complexes ou n'importe quel autre corps.

bool	bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed	d1;
	Fixed	d2;
	Fixed	d3;
	bool	neg;
	bool	pos;

	d1 = scalar(point, a, b);
	d2 = scalar(point, b, c);
	d3 = scalar(point, c, a);

	neg = (d1 < 0) && (d2 < 0) && (d3 < 0);
	pos = (d1 > 0) && (d2 > 0) && (d3 > 0);

	if (d1 == 0 || d2 == 0 || d3 == 0)
		return (false);
	return (neg || pos);
}
//Pour chaque droite, tu vérifies que le point D appartient au même demi plan 
//que celui contenant le troisième point de ton triangle ABC.