#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

#include "Brain.hpp"

class Animal
{
    protected :
        std::string type;

    public :
        Animal();
        Animal(Animal const & src);
        virtual ~Animal();
        
        Animal & operator=(Animal const & rhs);

        virtual void        makeSound() const;
        std::string const   getType() const;
};

#endif