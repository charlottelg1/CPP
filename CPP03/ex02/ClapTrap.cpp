#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "Default Claptrap constructor called" << std::endl;
    _hit        = 10;
	_nrj        = 10;
	_damages    = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "Claptrap constructor called" << std::endl;
    _name = name;
    _hit        = 100;
	_nrj        = 10;
	_damages    = 10;
}

ClapTrap::ClapTrap(ClapTrap & src)
{
    std::cout << "Copy Claptrap constructor called" << std::endl;
    *this = src;
    return;
}

ClapTrap & ClapTrap::operator=(ClapTrap const & rhs)
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

ClapTrap::~ClapTrap()
{
    std::cout << "Claptrap destructor called" << std::endl; 
}

void ClapTrap::recap()
{
    std::cout << std::endl;
    std::cout << _name << " vitals : " << std::endl;
    std::cout << _hit << " hit points" << std::endl;
    std::cout << _nrj << " energy points" << std::endl;
    std::cout << _damages << " attack damages" << std::endl;
    std::cout << std::endl;
}

void ClapTrap::attack(const std::string& target)
{
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

void ClapTrap::takeDamage(unsigned int amount)
{
    _hit -= amount;
    if (_hit < 0)
        _hit = 0;
    std::cout << _name << " took " << amount << " damages. ";
    std::cout << _name << " has " << _hit << " hit points remaining." << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (_nrj <= 0 || _hit <= 0)
    {
        std::cout << _name << " doesnt have enough energy to repaire..." << std::endl;
        return ;
    }
    std::cout << _name << " regained " << amount << " points of life" << std::endl;
    _hit += amount;
}

int     ClapTrap::get_damages()
{
    return(_damages);
}

int     ClapTrap::get_hit()
{
    return(_hit);
}

int     ClapTrap::get_nrj()
{
    return(_nrj);
}
