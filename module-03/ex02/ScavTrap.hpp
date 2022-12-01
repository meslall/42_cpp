#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include<iostream>
#include"ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
    public:
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(const ScavTrap &other);
        ~ScavTrap();
        
		ScavTrap &operator=(const ScavTrap &other);
        
		void attack(std::string const &target);
        void guardGate();
};

#endif