#include"Harl.hpp"


void Harl::debug( void ){
	std::cout<<"[ DEBUG ]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!\n"<<std::endl;
}
void Harl::info( void ){
	std::cout<<"[ INFO ]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n"<<std::endl;
}
void Harl::warning( void ){
	std::cout<<"[ WARNING ]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.\n"<<std::endl;
}
void Harl::error( void ){
	std::cout<< "[ ERROR ]\nThis is unacceptable! I want to speak to the manager now.\n"<<std::endl;
}


void Harl::complain( std::string level )
{

	size_t i = 0;
	std::string src[] = {"DEBUG","INFO","WARNING","ERROR"};

	void (Harl::*func[]) () = {&Harl::debug,&Harl::info,&Harl::warning,&Harl::error};
	while (level.compare(src[i]) != 0 && i < 4)
		i++;
	switch (i) {
		case (0): {
			(this->*func[0])();
		}
		case (1): {
			(this->*func[1])();
		}
		case (2): {
			(this->*func[2])();
		}
		case (3): {
			(this->*func[3])();
		} break;
		default: {
			std::cout<<"Invalid level"<<std::endl;
		}
	}

}