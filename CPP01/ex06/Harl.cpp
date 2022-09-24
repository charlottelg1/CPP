#include "Harl.hpp"

Harl::Harl(){}
Harl::~Harl(){}

void Harl::debug( void )
{
    std::cerr << "[DEBUG]" << std::endl;
    std::cerr << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!";
    std::cerr << std::endl;
}

void Harl::info( void )
{
   std::cerr << "[INFO]" << std::endl;
   std::cerr << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!";
   std::cerr << std::endl; 
}

void Harl::warning( void )
{
    std::cerr << "[WARNING]" << std::endl;
    std::cerr << "I think I deserve to have some extra bacon for free."<<std::endl;
    std::cout << "I’ve been coming for years whereas you started working here since last month.";
    std::cerr << std::endl; 
}

void Harl::error( void )
{
   std::cerr << "[ERROR]" << std::endl;
   std::cerr << "This is unacceptable! I want to speak to the manager now.";
   std::cerr << std::endl;  
}

void Harl::complain( std::string level )
{
    std::string tab[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int         i = 0;
    
    while (i < 4 && tab[i] != level)
    {
        i++;    
    }
	switch(i) 
	{
	    case 0:
	        this->debug();
	    case 1:
	        this->info();
	    case 2:
	        this->warning();
	    case 3:
	        this->error();
	        break;
	    default:
	        std::cerr <<  "[NOT FOUND]" << std::endl << "Probably complaining about insignificant problems..." << std::endl;
	        break;
	}
	return ;
}

