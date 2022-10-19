#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>

void	f(T const & value)
{
	std::cout << value;
}

template <typename T>

void 	iter(T *tab, size_t size, void(*f)(T const & value))
{
	for (size_t i = 0; i < size ; i++)
		f(tab[i]);
	std::cout << std::endl;
}

#endif