#ifndef CAT_HPP
#define CAT_HPP

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal
{
    public :
        Cat();
        Cat(Cat & src);
        virtual ~Cat();

        Cat & operator=(Cat const & rhs);

        void    makeSound() const;
        Brain    		*getBrain() const;
    
    private :
        Brain   *_CatBrain;
};

#endif