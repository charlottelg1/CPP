#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap 
{
    protected :
		std::string	_name;
		int			_hit;
		int			_nrj;
		int			_damages;
        
    public :
        ClapTrap();                                     //constructeur par défaut
		ClapTrap(std::string name);
        ClapTrap(ClapTrap & src);                       //constructeur par copie
        ClapTrap & operator=(ClapTrap const & rhs);     //opérateur d'assignation
        ~ClapTrap();                                    //destructeur
		
		void		recap();
		void 	attack(const std::string& target);
		void 		takeDamage(unsigned int amount);
		void 		beRepaired(unsigned int amount);
		int			get_damages();
		int			get_hit();
		int			get_nrj();
};

#endif