#ifndef FIXED_H
#define FIXED_H

#include <iostream>

class Fixed 
{
    public :
        Fixed();                                //constructeur par défaut
        Fixed(Fixed & src);                     //constructeur par copie
        Fixed & operator=(Fixed const & rhs);   //opérateur d'assignation
        ~Fixed();                               //destructeur
        int getRawBits( void ) const;           //retourne la valeur du nombre à virgule fixe sans la convertir
        void setRawBits( int const raw );       //initialise la valeur du nombre à virgule fixe avec celle passée en paramètre.
    private :
        int                 _fix;
        static int const    _bits = 8;
};

#endif
