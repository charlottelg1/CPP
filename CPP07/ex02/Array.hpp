#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <stdlib.h>

template<typename T>
class Array {
	public :
		Array(); 
		Array(unsigned int n);
		Array<T>(Array<T> const & copy); // toute modification de l’array original ou de sa copie ne doitpas impacter l’autre array
		Array<T> & operator=(Array<T> const & assign); // toute modification de l’array original ou de sa copie ne doitpas impacter l’autre array
		virtual ~Array();

		size_t size() const;

		T & operator[](unsigned int i);
		void	display_tab();
	private : 
		T 		*_tab;
		size_t	_size;
};

#endif