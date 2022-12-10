#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{

public:

	Cat( void );
	Cat( const Cat &src );
	~Cat( void );

	void	makeSound( void ) const ;
};

#endif
