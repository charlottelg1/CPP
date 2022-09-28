#include "ClapTrap.hpp"

int main()
{
    ClapTrap    clap("Clap");

    clap.recap();
    clap.attack("target");
    clap.recap();
    clap.takeDamage(2);
    clap.recap();
    clap.beRepaired(3);
    clap.recap();
    clap.takeDamage(11);
    clap.recap();
    clap.attack("target");
    clap.recap();
    clap.beRepaired(3);
    clap.recap();
    
    return (0);
}