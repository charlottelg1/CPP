#include "Zombie.hpp"

Zombie* newZombie( std::string name )
{
    Zombie  *NewZombie = new Zombie;
    
    NewZombie->naming(name);
    return(NewZombie);
}

/* It creates a zombie, name it, and return it so you can use it outside of 
the function scope.*/