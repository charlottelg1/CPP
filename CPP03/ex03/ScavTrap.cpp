#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
    std::cout << "Default Scavtrap constructor called" << std::endl;
    _hit        = 100;
	_nrj        = 50;
	_damages    = 20;
}

ScavTrap::ScavTrap(std::string name)
{
    std::cout << "Scavtrap constructor called" << std::endl;
    _name = name;
    _hit        = 100;
	_nrj        = 50;
	_damages    = 20;
}

ScavTrap::ScavTrap(ScavTrap & src)
{
    std::cout << "Copy Scavtrap constructor called" << std::endl;
    *this = src;
    return;
}

ScavTrap & ScavTrap::operator=(ScavTrap const & rhs)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
    {
        _name = rhs._name;
        _hit = rhs._hit;
        _nrj = rhs._nrj;
        _damages = rhs._damages;
    }
    return (*this);
}

ScavTrap::~ScavTrap()
{
    std::cout << "Scavtrap destructor called" << std::endl;
}

void    ScavTrap::guardGate()
{
    if (_hit <= 0)
    {
        std::cout << _name << "doesnt have enough energy to get into Gate Keeper Mode..." << std::endl;
        return ;
    }
    std::cout << "Scav Trap entered Gate Keeper Mode" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
    std::cout << "SCAVATTACK" << std::endl;
    if (_nrj <= 0)
    {
        std::cout << _name << " doesnt have enough energy to attack..." << std::endl;
        return ;
    }
    if (_hit <= 0)
    {
        std::cout << _name << " is K.O., he cant attack" << std::endl;
        return ; 
    }
    std::cout << _name << " attacks " << target;
    std::cout << ", causing " << _damages << " points of damage !" << std::endl;
    _nrj--;
}