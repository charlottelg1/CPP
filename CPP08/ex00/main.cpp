#include "easyfind.hpp"

int	main(void)
{
	std::cout << "LIST \n";
	std::list<int>	lst;
	lst.push_back(1);
	lst.push_back(2);
	lst.push_back(3);
	lst.push_back(4);
	try 
	{
		easyfind(lst, 2);
		easyfind(lst, 3);
		easyfind(lst, 4);
		easyfind(lst, 5);
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

	std::cout << "\nVECTOR \n";
	std::vector<int>	v(5, 10);
	try 
	{
		easyfind(v, 10);
		easyfind(v, 5);
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	v.push_back(5);
	try 
	{
		easyfind(v, 5);
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}