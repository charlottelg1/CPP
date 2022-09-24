#include "Zombie.hpp"

void Zombie::announce( void )
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::naming(std::string str)
{
   this->name = str;
   std::cout << name << " named !" <<std::endl;
}

Zombie::Zombie(void)
{
    std::cout << "Zombie created !" << std::endl;
}

Zombie::~Zombie(void)
{
    std::cout << this->name << " destroyed !" << std::endl;
}

