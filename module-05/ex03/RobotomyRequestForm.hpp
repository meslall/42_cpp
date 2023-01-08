#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include<iostream>
#include"Bureaucrat.hpp"

class RobotomyRequestForm : public Form
{
	private:
		std::string _target;
		RobotomyRequestForm();
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & src);
		~RobotomyRequestForm();

		RobotomyRequestForm & operator=(RobotomyRequestForm const & rhs);
		
		std::string getTarget() const;

		void execute(Bureaucrat const & executor) const;
};

#endif