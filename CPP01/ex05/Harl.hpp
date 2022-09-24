#ifndef HARL_H
#define HARL_H

#include <iostream>
#include <string>
#include <iomanip>

class Harl 
{
    public :
        Harl();
        ~Harl();
        void complain( std::string level );
    private : 
        void debug( void );
        void info( void );
        void warning( void );
        void error( void );
};

typedef struct { 
    std::string complain_name; 
    void        (Harl::*f)(void);
} Complain_type;

#endif 