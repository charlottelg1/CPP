#ifndef WEAPON_H
#define WEAPON_H

#include <iostream>
#include <string>
#include <iomanip>

class Weapon 
{
    public :
        Weapon(std::string str);
        ~Weapon();
        std::string const&  getType();
        void                setType(std::string const type);
    private : 
        std::string         _type;
};

#endif 