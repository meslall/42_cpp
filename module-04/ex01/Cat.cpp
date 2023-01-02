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

Cat		&Cat::operator=( Cat const &other )
{
	std::cout << "Assignement operator for Cat called" << std::endl;
	delete this->brain;
	this->brain = new Brain();
	this->type = other.getType();
	*(this->brain) = *(other.brain);
	return *this;
}

void	Cat::makeSound( void ) const
{
	std::cout << "Meeeeeeeow" << std::endl;
}

Brain	*Cat::getBrain( void ) const
{
	return this->brain;
}
