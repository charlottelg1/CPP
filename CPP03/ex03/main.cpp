#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
    DiamondTrap  diamond("Diamond");
    std::cout<<std::endl;
    ClapTrap    clap("Clap");

    diamond.recap();
    clap.recap();

    clap.attack("target");
    diamond.beRepaired(5);
    diamond.attack("target");
    
    std::cout << std::endl;

    diamond.whoAmI();

    diamond.recap();
    clap.recap();

    return (0);
}