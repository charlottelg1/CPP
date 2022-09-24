#ifndef FIXED_H
#define FIXED_H

#include <iostream>
#include <cmath>

class Fixed 
{
    public :
        Fixed();                                //constructeur par défaut
        Fixed(Fixed const &  src);              //constructeur par copie
        Fixed(int const const_int);             //constructeur qui convertit const int en virgule fixe
        Fixed(float const const_float);         //constructeur qui  qui convertit const float en virgule fixe
        Fixed & operator=(Fixed const & rhs);   //opérateur d'assignation
        ~Fixed();                               //destructeur
        int     getRawBits( void ) const;       //retourne la valeur du nombre à virgule fixe sans la convertir
        void    setRawBits( int const raw );    //initialise la valeur du nombre à virgule fixe avec celle passée en paramètre
        float   toFloat( void ) const;          //convertit la valeur en virgule fixe en nombre à virgule flottante
        int     toInt( void ) const;            //convertit la valeur en virgule fixe en nombre entier
    private :
        int                 _fix;
        static int const    _bits = 8;
};

std::ostream & operator<<(std::ostream &o, Fixed const &rhs);
//qui insère une représentation en virgule flottante du nombre à virgule fixe dans le flux de sortie 
//(objet output stream)passé en paramètre

#endif
