# include "Base.hpp"
# include "A.hpp"
# include "B.hpp"
# include "C.hpp"

Base * generate(void)
{
	int		i = rand() % 3;
	Base	*base = NULL;

	switch(i)
	{
		case(0) :
			base = new A();
			std::cout << "Class A has been created" << std::endl;
			break;
		case(1) : 
			base = new B();
			std::cout << "Class B has been created" << std::endl;
			break;
		case(2) :
			base = new C();
			std::cout << "Class C has been created" << std::endl;
			break;
	}
	return (base);
}
/*Elle crée aléatoirement une instance de A, B ou C et la retourne en tant que pointeur sur
Base. Utilisez ce que vous souhaitez pour l’implémentation du choix aléatoire.*/

void identify(Base* p)
{
	std::cout << "Type de l'objet pointe * : ";
	if (dynamic_cast<A*>(p))
		std::cout << "A";
	else if (dynamic_cast<B*>(p))
		std::cout << "B";
	else if (dynamic_cast<C*>(p))
		std::cout << "C";
}
// Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C".

void identify(Base& p)
{
	std::cout << "Type de l'objet pointe & : ";
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A";
	}
	catch(const std::exception& e){}
	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B";
	}
	catch(const std::exception& e){}
	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C";
	}
	catch(const std::exception& e){}
}
/*Elle affiche le véritable type de l’objet pointé par p : "A", "B" ou "C". Utiliser un pointeur
dans cette fonction est interdit.*/

int	main()
{
	for (int i = 0; i < 10; i++)
	{
		Base	*base = generate();
		identify(*base);
		std::cout << std::endl;
		identify(base);
		std::cout << std::endl;
		delete base;
		std::cout << std::endl;
	}
	return 0;
}