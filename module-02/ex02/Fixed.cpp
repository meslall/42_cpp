#include "Fixed.hpp"

Fixed::Fixed( void ): _fixed_point_value(0){}

Fixed::Fixed( Fixed const & src )
{
	*this = src;
	return;
}

Fixed::Fixed(const int value)
{
	this->_fixed_point_value = roundf(value * pow(2,this->_number_of_fractional_bits));
	return;
}

Fixed::Fixed(const float value)
{
	this->_fixed_point_value = roundf(value * pow(2,this->_number_of_fractional_bits));
	return;
}

Fixed::~Fixed( void ){}

float	Fixed::toFloat(void) const
{
	return((float)this->_fixed_point_value / (float)(1<< this->_number_of_fractional_bits));	
}

int		Fixed::toInt(void)	const
{
	return(roundf(this->_fixed_point_value / (1 << this->_number_of_fractional_bits)));
}

int	Fixed::getRawBits( void ) const
{
	return (this->_fixed_point_value);
}

void	Fixed::setRawBits( const int raw )
{
	this->_fixed_point_value = raw;
}
//===========================================================
Fixed &Fixed::operator=( Fixed const & other)
{
	if (this != &other)
		this->_fixed_point_value = other.getRawBits();
	return *this;
}

Fixed Fixed::operator+(const Fixed &other)
{
	Fixed sum;
	sum.setRawBits(this->getRawBits() + other.getRawBits());
	return(sum);
}

Fixed Fixed::operator-(const Fixed &other)
{
	Fixed sum;
	sum.setRawBits(this->getRawBits() - other.getRawBits());
	return(sum);
}

Fixed Fixed::operator*(const Fixed &other)
{
	float f = this->toFloat() * other.toFloat();
	Fixed sum(f);
	return(sum);
}

Fixed Fixed::operator/(const Fixed &other)
{
	float f = this->toFloat() / other.toFloat();
	Fixed sum(f);
	return(sum);
}

Fixed	&Fixed::operator++()
{
	Fixed tmp(0.00390625f);
	return (*this = *this + tmp);
}

Fixed	&Fixed::operator--()
{
	Fixed tmp(0.00390625f);
	return (*this = *this - tmp);
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	*this = *this + Fixed(0.00390625f);
	return (tmp);
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	*this = *this - Fixed(0.00390625f);
	return (tmp);
}

std::ostream &operator<<(std::ostream& os,const Fixed& dt)
{
	os << dt.toFloat();
	return os;
}
//============================================================
bool	Fixed::operator<(const Fixed &other) const
{
	return(this->_fixed_point_value < other._fixed_point_value ? true : false);
}

bool    Fixed::operator==(const Fixed &other) const
{
	return(this->_fixed_point_value == other._fixed_point_value ? true : false);
}

bool    Fixed::operator!=(const Fixed &other) const
{
	return(this->_fixed_point_value != other._fixed_point_value ? true : false);
}

bool	Fixed::operator<=(const Fixed &other) const
{
	return(this->_fixed_point_value <= other._fixed_point_value ? true : false);
}

bool	Fixed::operator>=(const Fixed &other) const
{
	return(this->_fixed_point_value >= other._fixed_point_value ? true : false);
}

bool	Fixed::operator>(const Fixed &other) const
{
	return (this->_fixed_point_value > other._fixed_point_value ? true : false);
}
//============================================================
const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return b;
	return a;
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return a;
	return b;
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
	if(a.getRawBits() > b.getRawBits())
		return b;
	return a;
}
//============================================================