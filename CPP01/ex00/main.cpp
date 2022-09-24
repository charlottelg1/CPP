#include "Zombie.hpp"

int main(void)
{
    Zombie  Undead;
    Zombie  *Nouveau;
    Undead.naming("Foo");
    Undead.announce();
    
    Nouveau = newZombie("New");
    Nouveau->announce(); //Pour montrer qu'on peut l'utiliser en dehors du scope 
    
    randomChump("Random");
    
    delete Nouveau;
    return (0);
}