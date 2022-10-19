#include "iter.hpp"

int	main(void)
{
	std::cout << "INT :" << std::endl;
	int	tab[4] = {1,2,3,4};
	iter(tab, 4, &f);

	std::cout << std::endl;

	std::cout << "STR :" << std::endl;
	std::string	str = "Hello World !";
	iter(str.c_str(), str.size(), &f);

	return (0);
	
}
