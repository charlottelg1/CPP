#ifndef AANIMAL_HPP
#define AANIMAL_HPP

#include <iostream>

#include "Brain.hpp"

class AAnimal
{
	protected :
		std::string type;

	public :
		AAnimal();
		AAnimal(AAnimal const & src);
		virtual ~AAnimal();
		
		AAnimal & operator=(AAnimal const & rhs);

		virtual void    	makeSound() const = 0;
		std::string const	getType() const;
};

#endif