#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) :  Form("ShrubberyCreationForm", 145, 137), _target()
{
	std::cout << "Default constructor for ShrubberyCreationForm called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : Form("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "Constructor for ShrubberyCreationForm called" << std::endl;
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & src) : Form(src)
{
	std::cout << "Copy constructor for ShrubberyCreationForm called" << std::endl;
	*this = src;
	return;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "Destructor for ShrubberyCreationForm called" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const & other)
{
	this->_target = other._target;
	std::cout << "Assignement operator for ShrubberyCreationForm called" << std::endl;
	return (*this);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &bureaucrat) const
{
	std::ofstream	myfile;
	std::string		fileName = this->_target + "_shrubbery";

	this->checkGrades();
	if (!this->getSigned() || bureaucrat.getGrade() > this->getGradeToExecute())
		throw Form::CantExecuteForm();
	myfile.open(fileName.c_str(), std::ios::out);

myfile <<"	                                                         .	" << std::endl;
myfile <<"                                               .         ;   	"<< std::endl;
myfile <<"                  .              .              ;%     ;;    	"<< std::endl;
myfile <<"                    ,           ,                :;%  %;    	"<< std::endl;
myfile <<"                     :         ;                   :;%;     .,"<< std::endl;
myfile <<"            ,.        %;     %;            ;        %;    ,;  "<< std::endl;
myfile <<"              ;       ;%;  %%;        ,     %;    ;%;    ,%   "<< std::endl;
myfile <<"               %;       %;%;      ,  ;       %;  ;%;   ,%;    "<< std::endl;
myfile <<"                ;%;      %;        ;%;        % ;%;  ,%; 		"<< std::endl;
myfile <<"                 `%;.     ;%;     %;         `;%%;.%;		 	"<< std::endl;
myfile <<"                  `:;%.    ;%%. %@;        %; ;@%;% 			"<< std::endl;
myfile <<"                     `:%;.  :;bd%;          %;@%; 			"<< std::endl;
myfile <<"                       `@%:.  :;%.         ;@@%;  	        "<< std::endl;
myfile <<"                         `@%.  `;@%.      ;@@%;       	   	"<< std::endl;
myfile <<"                           `@%%. `@%%    ;@@%; 	         	"<< std::endl;
myfile <<"                            ;@%. :@%%  %@@%;      	    	"<< std::endl;
myfile <<"                               %@bd%%%bd%%:;       		   	"<< std::endl;
myfile <<"                                #@%%%%%:;;    	 			"<< std::endl;
myfile <<"                                 %@@%%%::; 					"<< std::endl;
myfile <<"                                 %@@@%(o);  .         	  	"<< std::endl;
myfile <<"                                 %@@@o%;:(.,          		"<< std::endl;
myfile <<"                             `.. %@@@o%::;  		        	"<< std::endl;
myfile <<"                                `)@@@o%::; 			        "<< std::endl;
myfile <<"                                %@@(o)::;    			     	"<< std::endl;
myfile <<"                               .%@@@@%::;     	    	    "<< std::endl;
myfile <<"                               ;%@@@@%::;.          	    	"<< std::endl;
myfile <<"                              ;%@@@@%%:;;;.    	            "<< std::endl;
myfile <<"                          ...;%@@@@@%%:;;;;,..        	    "<< std::endl;
myfile.close();
	std::cout << "Created "<< this->_target << "_shrubbery" << std::endl;
}