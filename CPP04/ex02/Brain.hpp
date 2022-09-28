#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    public :
        Brain();
        Brain(Brain const & src);
        virtual ~Brain();
        
        Brain & operator=(Brain const & rhs);

        std::string ideas[100];
};

#endif