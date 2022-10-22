#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <vector>
# include <algorithm>
# include <math.h>

class Span
{
	public:
		// Constructors
		Span();
		Span(unsigned int N);
		Span(const Span &copy);
		
		// Destructor
		~Span();
		
		// Operators
		Span & operator=(const Span &assign);

		//Members
		void			addNumber(int nb);
		unsigned int	shortestSpan();
		unsigned int 	longestSpan();
		void			display_vect();
		void			rangeSpan(int value, int nb);
		
	private:
		unsigned int 		_N;
		std::vector<int>	_vect;
		
};

#endif