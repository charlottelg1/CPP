#ifndef DIAMONTRAP_HPP
#define DIAMONTRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
    private :
        std::string   _name;

    public :
        DiamondTrap();                                     //constructeur par défaut
		DiamondTrap(std::string const name);
        DiamondTrap(DiamondTrap & src);                    //constructeur par copie
        DiamondTrap & operator=(DiamondTrap const & rhs);  //opérateur d'assignation
        ~DiamondTrap();                                    //destructeur

        void    whoAmI();
        using   ScavTrap::attack;
};

#endif
