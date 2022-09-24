#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie  *Horde = new Zombie[N];
    int     i = 0;
    
    while (i < N)
    {
        Horde[i].naming(name);
        i++;
    }
    
    return(Horde);
}

/* It must allocate N Zombie objects in a single allocation. 
Then, it has to initialize the zombies, giving each one of them the name passed
as parameter. The function returns a pointer to the first zombie. */