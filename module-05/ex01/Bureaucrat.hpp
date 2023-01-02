#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <stdexcept>

class Bureaucrat
{
private:

	const std::string	_name;
	int					_grade;

	static const int	lowestGrade = 150;
	static const int	highestGrade = 1;

	Bureaucrat( void );
	void	checkGrade( void ) const ;

public:

	Bureaucrat( const std::string &name, int grade );
	Bureaucrat( const Bureaucrat &src );
	~Bureaucrat( void );

	Bureaucrat	&operator=( const Bureaucrat &other );

	const std::string	&getName( void ) const;
	int					getGrade( void ) const;

	void	incrementGrade( int quantity );
	void	decrementGrade( int quantity );

	void	signForm() const;

	class GradeTooHighException : public std::exception
	{
	public:
		virtual const char* what()  const throw()
		{
			return ("The grade you set is too high");
		}
	};

	class GradeTooLowException : public std::exception
	{
	public:
		virtual const char* what() const throw()
		{
			return ("The grade you set is too low");
		}
	};

	static bool check;

};

std::ostream	&operator<<( std::ostream &o, const Bureaucrat &instance);

#endif
