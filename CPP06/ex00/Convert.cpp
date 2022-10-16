#include "Convert.hpp"

// Constructors
Convert::Convert()
{
	std::cout << "\e[0;33mDefault Constructor called of Convert\e[0m" << std::endl;
}

Convert::Convert(const Convert &copy) : _value(copy._value)
{
	std::cout << "\e[0;33mCopy Constructor called of Convert\e[0m" << std::endl;
}

Convert::Convert(std::string const value) : _value(value)
{
	std::cout << "\e[0;33mStr Constructor called of Convert\e[0m" << std::endl;
	convert_value();
}

// Destructor
Convert::~Convert()
{
	std::cout << "\e[0;31mDestructor called of Convert\e[0m" << std::endl;
}


// Operators
Convert & Convert::operator=(const Convert &assign)
{
	_value = assign._value;
	return *this;
}

//Members
void	Convert::convert_value()
{
	char	*endptr;
	char	tmp;

	if (getValue().size() == 1)
	{
		tmp = _value[0];
		_doubleValue = static_cast<double>(tmp);
		if (tmp >= '0' && tmp <= '9')
			_doubleValue -= 48;
	}
	else
	{
		_doubleValue = std::strtod(_value.c_str(), &endptr); //La fonction strtod() convertit la portion initiale de la chaîne pointée par nptr en un réel de type double.
		if (*endptr)
		{
			if (*endptr == 'f')
				endptr++;
			while (*endptr)
			{
				if (!isspace(*endptr))
					throw std::runtime_error("Not convertible");
				endptr++;
			}
		}
	}
}

void	Convert::display()
{
	convert_value();
	std::cout << "char: ";
	toChar();
	std::cout << "int: ";
	toInt();
	std::cout << "float: ";
	toFloat();
	std::cout << "double: ";
	toDouble();
}

void	Convert::toChar()
{
	char	c = static_cast<char>(_doubleValue);
	if (c >= 32 && c <= 126)
		std::cout << c;
	else if (isnan(_doubleValue)) //Determines if the given floating point number arg is a not-a-number (NaN) value.
		std::cout << "impossible";
	else 
		std::cout << "Non displayable";
	std::cout <<std::endl;
}

void	Convert::toInt()
{
	int	i = static_cast<int>(_doubleValue);
	if (_doubleValue > INT_MAX)
		std::cout << "> INT_MAX";
	else if (_doubleValue < INT_MIN)
		std::cout << " < INT_MIN";
	else if (isnan(_doubleValue) || isinf(_doubleValue)) //Returns whether x is an infinity value (either positive infinity or negative infinity).
		std::cout << "impossible";
	else
		std::cout << i;
	std::cout << std::endl;
}

void	Convert::toFloat()
{
	float	f = static_cast<float>(_doubleValue);

	std::cout << f;
	if (f == floor(_doubleValue) && !isinf(_doubleValue))
		std::cout << ".0f";
	else
		std::cout << "f";
	std::cout << std::endl;
}

void	Convert::toDouble()
{
	std::cout << _doubleValue;
	if (_doubleValue == floor(_doubleValue) && !isinf(_doubleValue)) //Rounds x downward
		std::cout << ".0";
	std::cout << std::endl;
}

std::string	Convert::getValue() const
{
	return(_value);
}
