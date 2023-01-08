#include "Bureaucrat.hpp"

bool Bureaucrat:: check = true;

Bureaucrat::Bureaucrat( void ) : _name(""), _grade(Bureaucrat::lowestGrade)
{
		std::cout << "Default constructor for Bureaucrat called" << std::endl;
	return;
}

Bureaucrat::Bureaucrat( const std::string &name, int grade ) : _name(name), _grade(grade)
{
	this->checkGrade();
	if(!Bureaucrat::check){
	if(this->_grade < Bureaucrat::highestGrade)
		this->_grade = Bureaucrat::highestGrade;
	else if(this->_grade > Bureaucrat::lowestGrade)
		this->_grade = Bureaucrat::lowestGrade;
	}
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
	if (this->_grade < this->highestGrade){
		Bureaucrat::check = false;
		throw Bureaucrat::GradeTooHighException();
	}
	else if (this->_grade > this->lowestGrade){
		Bureaucrat::check = false;
		throw Bureaucrat::GradeTooLowException();
	}
	Bureaucrat::check = true;
}

bool	Bureaucrat::signForm(Form &form) const
{
	if(form.beSigned(*this))
	{
		std::cout << this->_name << " signs the form " << form.getName() <<std::endl;
		return true;
	}
	else if(!form.getSigned() && this->_grade > form.getGradeToSign()){
		std::cout << this->_name << " cannot sign the form because their grade is not high enough" << std::endl;
		return false;
	}
	else{
		std::cout << this->_name << " cannot sign the form because it is already signed" << std::endl;
		return false;
	}
}

std::ostream &	operator<<( std::ostream & ostr, Bureaucrat const & instance)
{
	ostr << instance.getName() << ", Bureaucrat grade " << instance.getGrade();
	return ostr;
}