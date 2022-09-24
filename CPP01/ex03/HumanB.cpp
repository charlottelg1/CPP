#include "HumanB.hpp"

void HumanB::attack()
{
    if (!_weapon || _weapon->getType().empty())
        return ;
    if (_weapon && !_weapon->getType().empty())
    {
        std::cout << this->_name << " attacks with their " << this->_weapon->getType() << std::endl;
    }
}

/* that displays :
<name> attacks with their <weapon type> */

void    HumanB::setWeapon(Weapon &weapon)
{
    this->_weapon = &weapon;
}

HumanB::HumanB(std::string name): _name(name)
{
    std::cout << "HumanB created" << std::endl;
    _weapon = NULL;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destroyed" << std::endl;
}
