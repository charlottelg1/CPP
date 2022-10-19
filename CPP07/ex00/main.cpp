#include "whatever.hpp"

int	main(void)
{
	//INT
	int	a = 42;
	int	b = 24;

	std::cout << "INT" << std::endl;
	std::cout << "min : " << min<int>(a,b) << std::endl;
	std::cout << "max : "<< max<int>(a,b) << std::endl;
	std::cout << "a avant swap : " << a << std::endl;
	std::cout << "b avant swap : " << b << std::endl;
	swap<int>(a,b);
	std::cout << "a apres swap : " << a << std::endl;
	std::cout << "b apres swap : " << b << std::endl;

	std::cout << std::endl;
	
	//CHAR
	char	c = 'c';
	char	d = 'd';

	std::cout << "CHAR" << std::endl;
	std::cout << "min : " << min<char>(c,d) << std::endl;
	std::cout << "max : "<< max<char>(c,d) << std::endl;
	std::cout << "c avant swap : " << c << std::endl;
	std::cout << "d avant swap : " << d << std::endl;
	swap<char>(c,d);
	std::cout << "c apres swap : " << c << std::endl;
	std::cout << "d apres swap : " << d << std::endl;

	std::cout << std::endl;

	//DOUBLE
	double	e = 42.42;
	double	f = 36.36;

	std::cout << "DOUBLE" << std::endl;
	std::cout << "min : " << min<double>(e,f) << std::endl;
	std::cout << "max : " << max<double>(e,f) << std::endl;
	std::cout << "e avant swap : " << e << std::endl;
	std::cout << "f avant swap : " << f << std::endl;
	swap<double>(e,f);
	std::cout << "e apres swap : " << e << std::endl;
	std::cout << "f apres swap : " << f << std::endl;

	// //MAIN INTRA
	// int a = 2;
	// int b = 3;
	// ::swap( a, b );
	// std::cout << "a = " << a << ", b = " << b << std::endl;
	// std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	// std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	// std::string c = "chaine1";
	// std::string d = "chaine2";
	// ::swap(c, d);
	// std::cout << "c = " << c << ", d = " << d << std::endl;
	// std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	// std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;

	return (0);
}