#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>
# include <list>

/*The std::stack class is a container adaptor that gives the programmer the functionality 
of a stack - specifically, a LIFO (last-in, first-out) data structure.

The class template acts as a wrapper to the underlying container - only a specific set of 
functions is provided. The stack pushes and pops the element from the back of the underlying 
container, known as the top of the stack*/

/*Default deque (double ended queue) avec un begin et un end*/

template <typename T>
class MutantStack : public std::stack<T>
{
	public :
		MutantStack(){};
		MutantStack(MutantStack const & copy){*this = copy;};
		MutantStack & operator=(MutantStack const & assign){this->c = assign.c; return(*this);};
		virtual ~MutantStack(){};

	typedef typename std::stack<T>::container_type::iterator iterator;
	iterator begin(){return this->c.begin();};
	iterator end(){return this->c.end();};
};

#endif