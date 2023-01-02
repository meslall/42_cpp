#include "Bureaucrat.hpp"

bool Bureaucrat:: check = true ;

Bureaucrat::Bureaucrat( void ) : _name(""), _grade(Bureaucrat::lowestGrade)
{
		std::cout << "Default constructor for Bureaucrat called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ) : _name(name), _grade(grade)
{
	this->checkGrade();
	if(this->_grade < Bureaucrat::highestGrade)
		this->_grade = Bureaucrat::highestGrade;
	else if(this->_grade > Bureaucrat::lowestGrade)
		this->_grade = Bureaucrat::lowestGrade;
	std::cout << "Constructor for Bureaucrat called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( Bureaucrat const & src )
{
	std::cout << "Copy constructor for Bureaucrat called" << std::endl;
	*this = src;
	return;
}

Bureaucrat::~Bureaucrat( void )
{
		std::cout << "Destructor for Bureaucrat called" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=( const Bureaucrat & other )
{
	other.checkGrade();
	if(Bureaucrat::check)
		this->_grade = other._grade;
	std::cout << "Assignement operator for Bureaucrat called" << std::endl;
	return (*this);
}

const std::string	&Bureaucrat::getName( void ) const
{
	return (this->_name);
}

int					Bureaucrat::getGrade( void ) const
{
	return (this->_grade);
}

void	Bureaucrat::incrementGrade( int quantity )
{
	int tmp = this->_grade;
	this->_grade -= quantity;
	this->checkGrade();
	if(!Bureaucrat::check)
		this->_grade = tmp;
}

void	Bureaucrat::decrementGrade( int quantity )
{
	int tmp = this->_grade;
	this->_grade += quantity;
	this->checkGrade();
	if(!Bureaucrat::check)
		this->_grade = tmp;
}

void	Bureaucrat::checkGrade( void ) const
{
	try
	{
		if (this->_grade < this->highestGrade)
			throw Bureaucrat::GradeTooHighException();
		else if (this->_grade > this->lowestGrade)
			throw Bureaucrat::GradeTooLowException();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
		Bureaucrat::check = false;
	}
}

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & instance)
{
	ostr << instance.getName() << ", Bureaucrat grade " << instance.getGrade();
	return ostr;
}