#include "Array.hpp"

template<typename T>
Array<T>::Array()
{
	std::cout << "\e[0;33mDefault Constructor called of Array\e[0m" << std::endl;
	_size = 0;
	_tab = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int n)
{
	std::cout << "\e[0;33mInt Constructor called of Array\e[0m" << std::endl;
	_size = n;
	_tab = new T[n];;
}

template<typename T>
Array<T>::Array(Array<T> const & copy) 
{
	std::cout << "\e[0;33mCopy Constructor called of Array\e[0m" << std::endl;
	_tab = new T[copy._size];
	for (size_t i = 0; i < copy._size; i++)
		_tab[i] = copy._tab[i];
	_size = copy._size;
}

template<typename T>
Array<T> & Array<T>::operator=(Array<T> const & assign)
{
	delete[] _tab;
	if (assign._size > 0)
	{
		_tab = new T[assign._size]();
		for (unsigned int i = 0; i < assign._size; i++)
			_tab[i] = assign._tab[i];
	}
	_size = assign._size;
	return (*this);
}

template <typename T>
Array<T>::~Array()
{
	std::cout << "\e[0;31mDestructor called of Arraty\e[0m" << std::endl;
	delete[] _tab;
}

template<typename T>
size_t	Array<T>::size() const
{
	return (_size);
}

template<typename T>
T & Array<T>::operator[](unsigned int i)
{
	if (i >= _size)
		throw std::runtime_error("Invalid index");
	return (_tab[i]);
}

template<typename T>
void	Array<T>::display_tab()
{
	for (size_t i = 0; i < _size; i++)
	{
		std::cout << _tab[i] << std::endl;
	}
}