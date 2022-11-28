#include "Fixed.hpp"

Fixed::Fixed( void ): _fixed_point_value(0)
{
		std::cout << "Default constructor called" << std::endl;
	return;
}

Fixed::Fixed( Fixed const & src )
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
	return;
}

Fixed::Fixed(const int value)
{
	std::cout << "Int constructor called"<< std::endl;
	this->_fixed_point_value = roundf(value * pow(2,this->_number_of_fractional_bits));
	return;
}

Fixed::Fixed(const float value)
{
	std::cout << "Float constructor called"<<std::endl;
	this->_fixed_point_value = roundf(value * pow(2,this->_number_of_fractional_bits));
	return;
}

Fixed::~Fixed( void )
{
	std::cout << "Destructor called" << std::endl;
	return;
}

float	Fixed::toFloat(void) const
{
	return((float)this->_fixed_point_value / (float)(1<< this->_number_of_fractional_bits));	
}

int		Fixed::toInt(void)	const
{
	return(roundf(this->_fixed_point_value / (1 << this->_number_of_fractional_bits)));
}

Fixed &	Fixed::operator=( Fixed const & rhs )
{
		std::cout << "Assignement operator called" << std::endl;
	if (this != &rhs)
		this->_fixed_point_value = rhs.getRawBits();
	return *this;
}
std::ostream &operator<<(std::ostream& os,const Fixed& dt)
{
	os << dt.toFloat();
	return os;
}

int	Fixed::getRawBits( void ) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits( const int raw )
{

	std::cout << "setRawBits member function called" << std::endl;
	this->_fixed_point_value = raw;
}
