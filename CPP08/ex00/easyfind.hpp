#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>
# include <list>
# include <vector>
# include <map>

template <typename T>
typename T::const_iterator	easyfind(T container, int value)
{
	typename T::const_iterator	i;

	std::cout << value;
	if (!count(container.begin(), container.end(), value))
		throw std::runtime_error(" not found in container");
	i = find(container.begin(), container.end(), value);
	std::cout << " found in container" << std::endl;

	return (i);
}

#endif