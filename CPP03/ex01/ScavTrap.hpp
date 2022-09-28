#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{     
    public :
        ScavTrap();                                     //constructeur par défaut
		ScavTrap(std::string name);
        ScavTrap(ScavTrap & src);                       //constructeur par copie
        ScavTrap & operator=(ScavTrap const & rhs);     //opérateur d'assignation
        ~ScavTrap();                                    //destructeur

        void	guardGate();
        void 	attack(const std::string& target);

    private :
        bool    keeperMode;
};

#endif