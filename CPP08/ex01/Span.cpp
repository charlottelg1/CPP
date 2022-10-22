#include "Span.hpp"

// Constructors
Span::Span()
{
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
}

Span::Span(unsigned int N)
{
	std::cout << "\e[0;33mDefault Constructor called of Span\e[0m" << std::endl;
	_N = N; 
}

Span::Span(const Span &copy)
{
	(void) copy;
	std::cout << "\e[0;33mCopy Constructor called of Span\e[0m" << std::endl;
}


// Destructor
Span::~Span()
{
	std::cout << "\e[0;31mDestructor called of Span\e[0m" << std::endl;
}


// Operators
Span & Span::operator=(const Span &assign)
{
	(void) assign;
	return *this;
}

// Members
void	Span::addNumber(int nb)
{
	if (_vect.size() == _N)
		throw std::runtime_error("Vector is full");
	_vect.push_back(nb);
}

unsigned int Span::shortestSpan()
{
	if (_vect.empty() || _vect.size() == 1)
		throw std::runtime_error("Not enough elements in vector to compare");
	
	std::vector<int>	sorted = _vect;
	std::sort(sorted.begin(), sorted.end());
	int		span = sorted[1] - sorted[0];
	int		k = sorted[1];
	int		j = sorted[0];
	for (unsigned int i = 0; i < sorted.size() - 1; i++)
	{
		if (sorted[i + 1] == sorted[i])
			break;
		if ((sorted[i + 1] - sorted [i]) < span)
		{
			span = sorted[i + 1] - sorted [i];
			k = sorted[i + 1];
			j = sorted [i];
		}			
	}

	std::cout << "Shortest span is " << span << " between " << k << " and " << j << std::endl;

	return (static_cast<unsigned int>(span));
}

unsigned int Span::longestSpan()
{
	if (_vect.empty() || _vect.size() == 1)
		throw std::runtime_error("Not enough elements in vector to compare");

	std::vector<int>::const_iterator min = min_element(_vect.begin(), _vect.end());
	std::vector<int>::const_iterator max = max_element(_vect.begin(), _vect.end());

	std::cout << "Longest span is " << *max - *min << " between min " << *min << " and max " << *max << std::endl;

	return (*max - *min);
}

void	Span::display_vect()
{
	std::vector<int>::const_iterator	it = _vect.begin();
	std::vector<int>::const_iterator	ite = _vect.end();
	
	while (it != ite)
	{
		std::cout << *it << std::endl;
		it++;
	}
}

void	Span::rangeSpan(int value, int nb)
{
	if (nb + _vect.size() > _N)
		throw std::runtime_error("Failed rangeSpan because of size");
	_vect.insert(_vect.begin(), nb, value); //void insert (iterator position, size_type n, const value_type& val);
}