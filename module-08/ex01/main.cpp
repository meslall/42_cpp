#include "Span.hpp"

int	main( void )
{
	Span::verbose = true;
	Span	span1(5);

	span1.addNumber(4);
	try
	{
		std::cout << span1 << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	span1.addNumber(7);
	std::cout << span1 << std::endl;
	span1.addNumber(2);
	std::cout << span1 << std::endl;
	span1.addNumber(6);
	std::cout << span1 << std::endl;
	span1.addNumber(25);
	std::cout << span1 << std::endl;
	try
	{
		span1.addNumber(4);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << span1 << std::endl;


	Span	span2(5000000);
	/* Span	span2(500); */

	span2.addNumber(3);
	span2.randomFill();
	std::cout << span2 << std::endl;


	Span				span3(5);
	std::vector<int>	vect;

	vect.push_back(25);
	vect.push_back(5);
	vect.push_back(12);
	vect.push_back(90);
	vect.push_back(-2);
	span3.addByIteratorRange(vect.begin(), vect.end());
	std::cout << span3 << std::endl;
}