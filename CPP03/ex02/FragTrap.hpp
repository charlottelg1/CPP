#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{     
    public :
        FragTrap();                                     //constructeur par défaut
		FragTrap(std::string name);
        FragTrap(FragTrap & src);                       //constructeur par copie
        FragTrap & operator=(FragTrap const & rhs);     //opérateur d'assignation
        ~FragTrap();                                    //destructeur

        void	highFivesGuys(void);
};

#endif