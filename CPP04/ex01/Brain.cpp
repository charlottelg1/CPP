#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(Brain const & src)
{
    std::cout << "Brain copy constructor called" << std::endl;
    *this = src;
}

Brain::~Brain()
{
    std::cout << "Brain destructor called" << std::endl;
}

Brain & Brain::operator=(Brain const & rhs)
{
    std::cout << "Brain assignment operator called" << std::endl;
    int     i = 0;
    while (i < 100)
    {
        ideas[i] = rhs.ideas[i];
        i++;
    }
    return (*this);
}