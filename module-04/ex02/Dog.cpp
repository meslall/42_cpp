#include "Dog.hpp"

Dog::Dog( void )
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default constructor for Dog called" << std::endl;
	return;
}

Dog::Dog( Dog const & src ) : Animal(src)
{
	std::cout << "Copy constructor for Dog called" << std::endl;
	*this = src;
	return;
}

Dog::~Dog( void )
{
	std::cout << "Destructor for Dog called" << std::endl;
	delete this->brain;
	return;
}

Dog		&Dog::operator=( Dog const &rhs )
{
	std::cout << "Assignement operator for Dog called" << std::endl;
	delete this->brain;
	this->brain = new Brain();
	this->type = rhs.getType();
	*(this->brain) = *(rhs.brain);
	return *this;
}

void	Dog::makeSound( void ) const
{
	std::cout << "Wouf!" << std::endl;
}

Brain	*Dog::getBrain( void ) const
{
	return this->brain;
}
