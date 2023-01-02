#include "Brain.hpp"

Brain::Brain( void )
{
	std::cout << "Default constructor for Brain called" << std::endl;
	return;
}

Brain::Brain( Brain const & src )
{
	std::cout << "Copy constructor for Brain called" << std::endl;
	*this = src;
	return;
}

Brain::~Brain( void )
{
	std::cout << "Destructor for Brain called" << std::endl;
	return;
}

Brain &	Brain::operator=( Brain const & other )
{
	std::cout << "Assignement operator for Brain called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return *this;
}

void	Brain::setIdea( int index, std::string idea )
{
	if(index < 0 || index > 99)
		return ;
	this->ideas[index] = idea;
}

std::string	Brain::getIdea( int index ) const
{
	if(index < 0 || index > 99)
		return ("");
	return this->ideas[index];
}