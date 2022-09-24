#include "Zombie.hpp"

void randomChump( std::string name )
{
    Zombie  Random;
    
    Random.naming(name);
    Random.announce();
}

// It creates a zombie, name it, and the zombie announces itself.