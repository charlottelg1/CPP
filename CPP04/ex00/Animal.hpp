#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
    protected :
        std::string type;

    public :
        Animal();
        Animal(Animal const & src);
        virtual ~Animal();
        
        Animal & operator=(Animal const & rhs);

        virtual void            makeSound() const;
        std::string const       getType() const;
};

#endif

// un destructeur virtuel fait en sorte que si un programme detruit une abstraction
// polymorphique allouee dynamiquement, le bon destructeur sera invoque