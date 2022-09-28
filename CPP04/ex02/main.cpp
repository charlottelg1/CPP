#include "AAnimal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "Brain.hpp"


int main(void)
{
	// AAnimal			test; // Ne fonctionne pas car la classe est abstraite : on en peut pas instancier un AAnimal
    int             k = 3;
    AAnimal          *tab[k];
    
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
    std::cout << "cat, ideas 0 : " << cat.getBrain()->ideas[0] << std::endl;
    std::cout << "kitty 1, ideas 0 : " << kitty.getBrain()->ideas[0] << std::endl;
    
	std::cout << std::endl;

    kitty = cat;

	std::cout << std::endl;
    
    std::cout << "step 2" << std::endl;
    std::cout << "cat, ideas 0 : " << cat.getBrain()->ideas[0] << std::endl;
    std::cout << "kitty, ideas 0 : " << kitty.getBrain()->ideas[0] << std::endl;

    std::cout << std::endl;

	for (int i = 0; i < k; i++)
        delete tab[i];

	std::cout << std::endl;


    return (0);
} 