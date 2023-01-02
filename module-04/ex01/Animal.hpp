#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
#include "Brain.hpp"
class Animal
{

protected:

	std::string type;

public:

	Animal( void );
	Animal( const Animal &src );
	virtual ~Animal( void );

	virtual Animal	&operator=( const Animal &other );

	virtual void	makeSound( void ) const;
	
	const std::string	&getType( void ) const;
};

#endif
