#include "Span.hpp"

# define SIZE1 10
# define SIZE2 1000

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	try
	{
		sp.rangeSpan(10, 5);
		std::cout << "Success sp" <<std::endl;
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
	
	Span sp2(5);
	try
	{
		sp2.rangeSpan(10, 5);
		std::cout << "Success sp2" <<std::endl;
	}
	catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }	

	sp2.display_vect();

	return 0;
}

// int	main(void)
// {
// 	Span	test(SIZE1);
// 	Span	test2(SIZE2);
// 	Span 	test3(2);

// 	try 
// 	{
// 		test.addNumber(5);
// 		test.addNumber(8);
// 		test.addNumber(12);
// 		test.addNumber(45);
// 		test.addNumber(3);
// 		test.addNumber(22);
// 		test.addNumber(115);
// 		test.addNumber(9);
// 		test.addNumber(68);
// 		test.addNumber(26);
// 		test.shortestSpan();
// 		test.longestSpan();
// 	}
// 	catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
	
// 	try 
// 	{
// 		test.addNumber(5);
// 		test.addNumber(8);
// 		test.addNumber(12);
// 		test.addNumber(45);
// 		test.addNumber(3);
// 		test.addNumber(22);
// 		test.addNumber(115);
// 		test.addNumber(9);
// 		test.addNumber(68);
// 		test.addNumber(26);
// 		test.addNumber(34);
// 		test.shortestSpan();
// 		test.longestSpan();
// 	}
// 	catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }

// 	for (int i = 0; i < SIZE2; i++)
// 		test2.addNumber(rand());
// 	test2.shortestSpan();
// 	test2.longestSpan();

// 	try 
// 	{
// 		test3.longestSpan();
// 		test3.shortestSpan();
// 	}
// 	catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// 	test3.addNumber(4);
// 	try 
// 	{
// 		test3.longestSpan();
// 		test3.shortestSpan();
// 	}
// 	catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// 	test3.addNumber(7);
// 	try 
// 	{
// 		test3.shortestSpan();
// 		test3.longestSpan();
		
// 	}
// 	catch(const std::exception& e)
//     {
//         std::cerr << e.what() << '\n';
//     }
// 	return (0);
// }