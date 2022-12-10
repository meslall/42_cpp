#include "Cat.hpp"

Cat::Cat( void )
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default constructor for Cat called" << std::endl;
	return;
}

Cat::Cat( Cat const & src ): Animal(src)
{
	std::cout << "Copy constructor for Cat called" << std::endl;
	*this = src;
	return;
}

Cat::~Cat( void )
{
	std::cout << "Destructor for Cat called" << std::endl;
	delete this->brain;
	return;
}

Cat		&Cat::operator=( Cat const &rhs )
{
	std::cout << "Assignement operator for Cat called" << std::endl;
	this->type = rhs.getType();
	*(this->brain) = *(rhs.brain);
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeeeeeow" << std::endl;
}
