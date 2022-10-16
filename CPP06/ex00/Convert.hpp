#ifndef CONVERT_HPP
# define CONVERT_HPP

# include <iostream>
# include <string>
# include <stdlib.h>
# include <climits>
# include <cstdlib>
# include <math.h>

class Convert
{
	public:
		// Constructors
		Convert();
		Convert(const Convert &copy);
		Convert(std::string const value);
		
		// Destructor
		~Convert();
		
		// Operators
		Convert & operator=(const Convert &assign);

		//Members
		void	convert_value();
		void	display();
		void	toChar();
		void	toInt();
		void	toFloat();
		void	toDouble();
		double	getDoubleValue() const;
		std::string		getValue() const;
		
	private:
		std::string	_value;
		double		_doubleValue;
};

#endif