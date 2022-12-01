#include"DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap default constructor called" << std::endl;
	this->_name = "Default";
	ClapTrap::setName( "Default_clap_name");
	this->setHitPoints( FragTrap::getHitPoints() );
	this->setEnergyPoints( ScavTrap::getEnergyPoints() );
	this->setAttackDamage( FragTrap::getAttackDamage() );
}

DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_name = name;
	ClapTrap::setName(name + "_clap_name");
	this->setHitPoints( FragTrap::getHitPoints() );
	this->setEnergyPoints( ScavTrap::getEnergyPoints() );
	this->setAttackDamage( FragTrap::getAttackDamage() );
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy)
{
	*this = copy;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap&	DiamondTrap::operator=(const DiamondTrap& copy)
{
	ClapTrap::operator=(copy);
	_name = copy._name;
	std::cout << "DiamondTrap assignation operator called" << std::endl;
	return (*this);
}

void			DiamondTrap::attack(std::string const& target)
{
	ScavTrap::attack(target);
}

void			DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << _name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::getName() << std::endl;
}