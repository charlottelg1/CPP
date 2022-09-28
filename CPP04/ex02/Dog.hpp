#ifndef DOG_HPP
#define DOG_HPP

#include "AAnimal.hpp"

class Dog : public AAnimal
{
    private :
        Brain   *_DogBrain;
    public :
        Dog();
        Dog(Dog & src);
        virtual ~Dog();

        Dog & operator=(Dog const & rhs);

        void    makeSound() const;
        Brain   *getBrain() const;
};

#endif