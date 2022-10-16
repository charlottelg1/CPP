#include "Convert.hpp"

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cout << "Please try again with 1 argument" << std::endl;
		return (-1);
	}

	try {
		Convert convert(av[1]);
		convert.display();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
}