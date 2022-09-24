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

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif 