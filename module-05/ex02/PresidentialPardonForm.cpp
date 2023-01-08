#include"PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):Form("PresidentialPardonForm",25,5), _target("")
{
	std::cout << "PresidentialPardonForm Default constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( const std::string &target ):
	Form("PresidentialPardonForm", 25, 5), _target(target)
{
		std::cout << "Standard constructor for PresidentialPardonForm called" << std::endl;
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src):Form ("PresidentialPardonForm",25,5),_target(src.getTarget())
{
	std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm Destructor called" << std::endl;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm const & other)
{
	std::cout << "PresidentialPardonForm Assignation operator called" << std::endl;
	if (this != &other)
	{
		this->_target = other.getTarget();
	}
	return *this;
}

const std::string &PresidentialPardonForm::getTarget (void) const
{
	return this->_target;
}

void	PresidentialPardonForm::execute(const Bureaucrat &bureaucrat) const
{
	this->checkGrades();
	if (!this->getSigned() || bureaucrat.getGrade() > this->getGradeToExecute())
		throw Form::CantExecuteForm();
	std::cout << this->_target << " has been pardoned by Zafod Beeblebrox." << std::endl;
}