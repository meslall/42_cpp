#include "Animal.hpp"

Animal::Animal( void ): type("")
{
	std::cout << "Default constructor for Animal called" << std::endl;
	return;
}

Animal::Animal( Animal const & src )
{
	std::cout << "Copy constructor for Animal called" << std::endl;
	*this = src;
	return;
}

Animal::~Animal( void )
{
	std::cout << "Destructor for Animal called" << std::endl;
	return;
}

Animal &	Animal::operator=( Animal const & other )
{
	std::cout << "Assignement operator for Animal called" << std::endl;
	this->type = other.getType();
	return *this;
}

void	Animal::makeSound( void ) const 
{
	std::cout << "Animal sound"<< std::endl;
}

const std::string	&Animal::getType( void ) const
{
	return (this->type);
}
