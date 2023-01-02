#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	std::cout << "Default constructor for Cat called" << std::endl;
	return;
}

Cat::Cat( Cat const & src ) : Animal(src)
{
	std::cout << "Copy constructor for Cat called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat( void )
{
	std::cout << "Destructor for Cat called" << std::endl;
	return;
}

Cat	&Cat::operator=( Cat const & other )
{
	std::cout << "Assignation operator for Cat called" << std::endl;
	this->type = other.type;
	return (*this);
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeeeeeow" << std::endl;
}
