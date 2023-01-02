#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucrat.hpp"
# include <iostream>
# include <stdexcept>

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExecute;
public:

	Form( void );
	Form( const std::string &name, int gradeToSign, int gradeToExecute );
	Form( const Form &src );
	~Form( void );

	Form	&operator=( const Form &other );

	const std::string	&getName( void ) const;
	bool				getSigned( void ) const;
	int					getGradeToSign( void ) const;
	int					getGradeToExecute( void ) const;

	void	beSigned( const Bureaucrat &bureaucrat );

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

};

std::ostream	&operator<<( std::ostream &o, const Form &instance);

#endif