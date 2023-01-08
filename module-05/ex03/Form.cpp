#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) :
	_name(name),
	_signed(false),
	_gradeToSign(gradeToSign),
	_gradeToExecute(gradeToExecute)
{
	this->checkGrades();
	std::cout << "Constructor for Form called" << std::endl;
	return;
}

Form::Form(Form const & src) :
	_name(src._name),
	_signed(src._signed),
	_gradeToSign(src._gradeToSign),
	_gradeToExecute(src._gradeToExecute)
{
	std::cout << "Copy constructor for Form called" << std::endl;
	return;
}

Form::~Form()
{
	std::cout << "Destructor for Form called" << std::endl;
}

Form	&Form::operator=(Form const & other)
{
	this->_signed = other._signed;
	std::cout << "Assignement operator for Form called" << std::endl;
	return (*this);
}

const std::string	&Form::getName( void ) const
{
	return (this->_name);
}

bool				Form::getSigned( void ) const
{
	return (this->_signed);
}

int					Form::getGradeToSign( void ) const
{
	return (this->_gradeToSign);
}

int					Form::getGradeToExecute( void ) const
{
	return (this->_gradeToExecute);
}

bool	Form::beSigned(const Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() <= this->_gradeToSign){
		this->_signed = true;
		return (true);
	}
	this->_signed = false;
	return (false);
}

void Form::checkGrades() const
{
	if (this->_gradeToExecute < Form::highestGrade || this->_gradeToSign < Form::highestGrade)
		throw Form::GradeTooHighException();
	if (this->_gradeToExecute > Form::lowestGrade || this->_gradeToSign > Form::lowestGrade)
		throw Form::GradeTooLowException();
}

std::ostream & operator<<(std::ostream &ostr, Form const &instance)
{
	ostr << instance.getName() << " Form has to be signed by a " << instance.getGradeToSign() 
	<< " grade and executed by a " << instance.getGradeToExecute() << " grade, it is " << (instance.getSigned() ? "" : "not") 
	<< " signed";
	return (ostr);
}
