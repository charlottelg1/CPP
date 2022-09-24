#ifndef ZOMBIE_H
#define ZOMBIE_H

#include <iostream>
#include <string>
#include <iomanip>

class Zombie 
{
    public :
        Zombie();
        ~Zombie();
        void announce( void );
        void naming(std::string str);
    private : 
        std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif 