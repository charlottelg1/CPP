#include "HumanA.hpp"
#include "Weapon.hpp"


void HumanA::attack()
{
    std::cout << this->_name << " attacks with their " << _weapon.getType() << std::endl;
}

/* that displays :
<name> attacks with their <weapon type> */

HumanA::HumanA(std::string name, Weapon &weapon): _name(name), _weapon(weapon) 
{
   std::cout << this->_name << ", Human A created with a " << _weapon.getType() << std::endl; 
}

HumanA::~HumanA()
{
    std::cout << _name << ", HumanA destroyed" << std::endl;
}
