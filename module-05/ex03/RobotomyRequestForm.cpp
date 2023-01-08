#include"RobotomyRequestForm.hpp"
#include<cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void):Form("RobotomyRequestForm", 72, 45), _target("")
{
	std::cout << "RobotomyRequestForm Default constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):Form("RobotomyRequestForm", 72, 45), _target(target)
{
	std::cout << "RobotomyRequestForm constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & src):Form("RobotomyRequestForm",72,45), _target(src.getTarget())
{
	std::cout << "RobotomyRequestForm Copy constructor called" << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "RobotomyRequestForm Destructor called" << std::endl;
}

RobotomyRequestForm & RobotomyRequestForm::operator=(RobotomyRequestForm const & rhs)
{
	std::cout << "RobotomyRequestForm Assignation operator called" << std::endl;
	if (this != &rhs)
	{
		this->_target = rhs.getTarget();
	}
	return *this;
}

std::string RobotomyRequestForm::getTarget() const
{
	return this->_target;
}

void	RobotomyRequestForm::execute(const Bureaucrat &bureaucrat) const
{
	this->checkGrades();
	if (!this->getSigned() || bureaucrat.getGrade() > this->getGradeToExecute())
		throw Form::CantExecuteForm();
	std::cout << "Make some noise!" << std::endl;
	if(std::rand() % 2)
		std::cout << this->_target << " has been robotomized successfully" << std::endl;
	else
		std::cout << this->_target << " robotomization failed" << std::endl;
}