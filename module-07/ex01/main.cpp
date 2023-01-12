#include "iter.hpp"

template<typename T>
void	display( T &whatever )
{
	std::cout << "Variable's value is: " << whatever << std::endl;
}

void	setRandomValue( int &number )
{
	number = std::rand() % 100;
}

int	main( void )
{
	std::string	strTable[3];
	int			*intTable = new int[5];

	strTable[0] = "salam";
	strTable[1] = "labas?";
	strTable[2] = "hmd!";
	::iter(strTable, 3, &display);
	for (int i = 0; i < 5; i ++)
		setRandomValue(intTable[i]);
	::iter(intTable, 5, &display);
}