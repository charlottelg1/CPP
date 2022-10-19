# include "Array.hpp"
# include "Array.tpp"

# define MAX_VAL 10

// int	main(void)
// {
// 	Array<int>	test(4);
// 	test.size();
// 	Array<int>	test2;
// 	test2.size();
// 	test2=test;
// 	test2.size();
// 	Array<int>	test3(test);
// 	test3.size();
// return (0);
// }

void	display_tabint(int *tab, int size)
{
	for (int i = 0; i < size; i++)
		std::cout<< tab[i] << std::endl;
}

void	display_tabchare(char *tab, int size)
{
	for (int i = 0; i < size; i++)
		std::cout<< tab[i] << std::endl;
}

// int main(int, char**)
// {
//     Array<int> numbers(MAX_VAL);
//     int* mirror = new int[MAX_VAL];
//     srand(time(NULL));
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         const int value = rand();
//         numbers[i] = value;
//         mirror[i] = value;
//     }
//     //SCOPE
//     {
// 		Array<int> tmp = numbers;
//         Array<int> test(tmp);
//     }
//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         if (mirror[i] != numbers[i])
//         {
//             std::cerr << "didn't save the same value!!" << std::endl;
//             return 1;
//         }
//     }
//     try
//     {
//         numbers[-2] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
//     try
//     {
//         numbers[MAX_VAL] = 0;
//     }
//     catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

//     for (int i = 0; i < MAX_VAL; i++)
//     {
//         numbers[i] = rand();
//     }
//     delete [] mirror;
//     return 0;
// }

int main(int, char**)
{
    Array<char> letters(MAX_VAL);
    char* mirror = new char[MAX_VAL];
    for (int i = 0; i < MAX_VAL; i++)
    {
        const char value = 'a';
        letters[i] = value + i;
        mirror[i] = value + i;
    }
	letters.display_tab();
	display_tabchare(mirror, MAX_VAL);
    //SCOPE
    {
		Array<char> tmp = letters;
        Array<char> test(tmp);
    }
    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != letters[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
			std::cerr << "mirror :  " << mirror[i] << " letters " << letters[i] <<std::endl;
            return 1;
        }
    }
    try
    {
        letters[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        letters[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        letters[i] = rand();
    }
    delete [] mirror;
    return 0;
}