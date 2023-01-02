#include "Animal.hpp"

Animal::Animal( void ): type("default")
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

Animal	&Animal::operator=( Animal const & other )
{
	std::cout << "Assignation operator for Animal called" << std::endl;
	this->type = other.type;
	return (*this);
}

Animal::~Animal( void )
{
	std::cout << "Destructor for Animal called" << std::endl;
	return;
}

const std::string	&Animal::getType( void ) const
{
	return (this->type);
}
