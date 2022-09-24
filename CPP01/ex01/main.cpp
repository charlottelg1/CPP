#include "Zombie.hpp"

int main(void)
{
    Zombie  *Horde;
    int     i = 0;
    int     N = 3;
    
    Horde = zombieHorde(N, "Jack");
    
    while (i < N)
    {
        Horde[i].announce();
        i++;
    }
    
    delete [] Horde;
    return (0);
}