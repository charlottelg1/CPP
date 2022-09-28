#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
    const Animal* meta = new Animal();
    const Animal* j = new Dog();
    const Animal* i = new Cat();

	std::cout << std::endl;

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound! grace au mot cle virtual dans Animal.hpp
    j->makeSound();
    meta->makeSound();

	std::cout << std::endl;

    delete meta;
    delete i;
    delete j;

    std::cout << std::endl;

    const WrongAnimal* wrongmeta = new WrongAnimal();
    const WrongAnimal* wrongi = new WrongCat();

	std::cout << std::endl;

    std::cout << wrongi->getType() << " " << std::endl;
    wrongi->makeSound(); //will output the wrong Animal sound! car le makeSound de WA n'est pas virtual
    wrongmeta->makeSound();

	std::cout << std::endl;

    delete wrongmeta;
    delete wrongi;

    return (0);
}