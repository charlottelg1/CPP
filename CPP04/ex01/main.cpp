#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"

int main(void)
{
    int             k = 4;
    Animal          *tab[k];
    
    for (int i = 0; i < k; i++)
    {
        if (i < k/2)
            tab[i] = new Dog();
        else
            tab[i] = new Cat();
    }

	std::cout << std::endl;

    Brain	*brain;
	Cat		cat;
	Cat		kitty;

	std::cout << std::endl;

	brain = cat.getBrain();
    brain->ideas[0] = "Je suis une idee";

    std::cout << "step 1" << std::endl;
    std::cout << "Tab 0, ideas 0 : " << cat.getBrain()->ideas[0] << std::endl;
    std::cout << "Tab 1, ideas 0 : " << kitty.getBrain()->ideas[0] << std::endl;
    
	std::cout << std::endl;

    kitty = cat;

	std::cout << std::endl;
    
    std::cout << "step 2" << std::endl;
    std::cout << "Tab 0, ideas 0 : " << cat.getBrain()->ideas[0] << std::endl;
    std::cout << "Tab 1, ideas 0 : " << kitty.getBrain()->ideas[0] << std::endl;

    std::cout << std::endl;

	for (int i = 0; i < k; i++)
        delete tab[i];

	std::cout << std::endl;

    return (0);
} 