#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <stdexcept>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
private:
	const std::string	_name;
	bool				_signed;
	const int			_gradeToSign;
	const int			_gradeToExecute;

	static const	int highestGrade = 1;
	static const	int lowestGrade = 150;
public:

	Form( const std::string &name, int gradeToSign, int gradeToExecute );
	Form( const Form &src );
	virtual ~Form( void );

	Form	&operator=( const Form &other );

	const std::string	&getName( void ) const;
	bool				getSigned( void ) const;
	int					getGradeToSign( void ) const;
	int					getGradeToExecute( void ) const;

	virtual	void	execute(Bureaucrat const & executor) const = 0;
	bool	beSigned(const Bureaucrat& bureaucrat );
	void	checkGrades( void ) const;

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

class CantExecuteForm : public std::exception
{
public:
	virtual const char* what() const throw()
	{
		return ("The form cannot be executed, either because it wasn't signed, or because the executor has a rank too low");
	}
};
};

std::ostream	&operator<<( std::ostream &o, const Form &instance);

#endif
