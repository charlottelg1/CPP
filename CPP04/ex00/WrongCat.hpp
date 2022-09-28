#ifndef WRONGWRONGCAT_HPP
#define WRONGWRONGCAT_HPP

#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    public :
        WrongCat();
        WrongCat(WrongCat & src);
        virtual ~WrongCat();

        WrongCat & operator=(WrongCat const & rhs);

        void    makeSound() const;
};

#endif