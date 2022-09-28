#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("DefaultDiamond_clap_name"),FragTrap(),  ScavTrap(), _name("DefaultDiamond")
{
    std::cout << "Default Diamondtrap constructor called" << std::endl;
    _hit        = FragTrap::_hit;
	_nrj        = ScavTrap::_nrj;
	_damages    = FragTrap::_damages;
    
}

DiamondTrap::DiamondTrap(std::string const name) : ClapTrap(name + "_clap_name"), _name(name)
{
    std::cout << "Diamondtrap constructor called" << std::endl;
    _hit        = FragTrap::_hit;
	_nrj        = ScavTrap::_nrj;
	_damages    = FragTrap::_damages;
}

DiamondTrap::DiamondTrap(DiamondTrap & src) : ClapTrap(src), FragTrap(src), ScavTrap(src),  _name(src._name)
{
    std::cout << "Copy Diamondtrap constructor called" << std::endl;
    *this = src;
    return;
}

DiamondTrap & DiamondTrap::operator=(DiamondTrap const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _hit = rhs._hit;
        _nrj = rhs._nrj;
        _damages = rhs._damages;
    }
    return (*this);
}

DiamondTrap::~DiamondTrap()
{
    std::cout << "Diamondtrap destructor called" << std::endl;
    
}

void    DiamondTrap::whoAmI()
{
    std::cout << "My name is " << _name << std::endl;
    std::cout << "Clap sous objet is " << ClapTrap::_name << std::endl;
}