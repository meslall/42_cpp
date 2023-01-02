#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat	*bur = new Bureaucrat("Bob1", 1);
	Bureaucrat	*bur2 = new Bureaucrat("Bob2", 150);

	Bureaucrat bur3 = *bur2;

	std::cout << *bur << std::endl;
	std::cout << *bur2 << std::endl;
	std::cout << bur3 << std::endl;

	bur->incrementGrade(1);
	bur2->decrementGrade(1);

	std::cout << *bur << std::endl;
	std::cout << *bur2 << std::endl;

	delete bur;
	delete bur2;

	return (0);
	
}