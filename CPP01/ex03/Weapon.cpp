#include "Weapon.hpp"

const std::string& Weapon::getType() // returns a const reference to type.
{
    // if (!_type.empty())
        return (_type);
}

void Weapon::setType(std::string newType) //sets type using the new one passed as parameter.
{
    this->_type = newType;
}

Weapon::Weapon(std::string str)
{
    if (str != "")
    {
        std::cout << "Weapon constructed" << std::endl;
        this->_type = str;
    }  
    else 
    {
        std::cout << "Weapon is NULL" << std::endl;
        this->_type = "no weapon";
    } 
}

Weapon::~Weapon()
{
    std::cout << "Weapon " << this->getType()<< " destroyed" << std::endl;
}