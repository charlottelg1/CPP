#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    ClapTrap    clap("Clap");
    ScavTrap    scav("Scav");
    FragTrap    frag("Frag");   

    clap.recap();
    scav.recap();
    frag.recap();

    scav.attack("target");

    std::cout << std::endl;

    clap.attack("target");
    frag.attack("target");

    scav.guardGate();
    frag.highFivesGuys();

    clap.takeDamage(100);

    clap.attack("target");

    clap.recap();

    return (0);
}