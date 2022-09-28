#include "FragTrap.hpp"

FragTrap::FragTrap()
{
    std::cout << "Default Fragtrap constructor called" << std::endl;
    _hit        = 100;
	_nrj        = 100;
	_damages    = 30;
}

FragTrap::FragTrap(std::string name)
{
    std::cout << "Fragtrap constructor called" << std::endl;
    _name = name;
    _hit        = 100;
	_nrj        = 100;
	_damages    = 30;
}

FragTrap::FragTrap(FragTrap & src)
{
    std::cout << "Copy FragTrapconstructor called" << std::endl;
    *this = src;
    return;
}

FragTrap & FragTrap::operator=(FragTrap const & rhs)
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

FragTrap::~FragTrap()
{
    std::cout << "Fragtrap destructor called" << std::endl;   
}

void	FragTrap::highFivesGuys(void)
{
    if (_hit <= 0)
    {
        std::cout << _name << "doesnt have enough energy to high five..." << std::endl;
        return ;
    }
    std::cout << "High Fives Guys ?" << std::endl;
}