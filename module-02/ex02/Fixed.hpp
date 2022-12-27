#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <cmath>

class Fixed
{
private:

	int					_fixed_point_value;

	static const int	_number_of_fractional_bits = 8;

public:

	Fixed( void );
	Fixed(const int value);
	Fixed(const float value);
	Fixed( const Fixed &src );
	float toFloat(void) const;
	int	toInt(void) const;
	~Fixed( void );

	int		getRawBits( void ) const;
	void	setRawBits( const int raw );

	Fixed	&operator=( const Fixed &other);
	Fixed	operator+( const Fixed &other);
	Fixed	operator-( const Fixed &other);
	Fixed	&operator++(void);
	Fixed	&operator--(void);
	Fixed	operator++(int);
	Fixed	operator--(int);
	Fixed	operator*(const Fixed &other);
	Fixed	operator/(const Fixed &other);

	bool	operator==( const Fixed &other) const;
	bool	operator!=( const Fixed &other) const;
	bool	operator<( const Fixed &other) const;
	bool	operator<=( const Fixed &other) const;
	bool	operator>( const Fixed &other) const;
	bool	operator>=( const Fixed &other) const;

	static  Fixed	&max(Fixed &a,Fixed &b);
	static  Fixed	&min(Fixed &a,Fixed &b);

	const static Fixed	&max(const Fixed &a, const Fixed &b);
	const static Fixed	&min(const Fixed &a, const Fixed &b);
};

std::ostream &operator << (std::ostream &os,Fixed const & dt);

#endif
