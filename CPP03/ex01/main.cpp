#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap    clap("Clap");
    ScavTrap    serena("Serena");

    serena.recap();
    clap.recap();

    serena.attack("target");
    clap.attack("target");

    serena.recap();
    clap.recap();
    
    serena.guardGate();
    serena.guardGate();

    serena.recap();
    clap.recap();

    return (0);
}