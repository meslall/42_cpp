#include"ClapTrap.hpp"

ClapTrap::ClapTrap()
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    this->name = "Default";
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap constructor called" << std::endl;
    this->name = name;
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
}

ClapTrap::ClapTrap(const ClapTrap &other)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &other)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    this->name = other.name;
    this->hitPoints = other.hitPoints;
    this->energyPoints = other.energyPoints;
    this->attackDamage = other.attackDamage;
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    if(this->energyPoints >= 1  && this->hitPoints > 0)
    {
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
        this->energyPoints -= 1;
        return;
    }
	if(this->hitPoints == 0)
		std::cout << "ClapTrap " << this->name << " doesn't have enough hit points to attack  " << std::endl;
	else
    	std::cout << "ClapTrap " << this->name << " doesn't have enough energy to attack or" << std::endl;
	return;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if(amount > this->hitPoints){
		this->hitPoints = 0;
    	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;

	}
	else{
    	this->hitPoints -= amount;
    	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	}
    return;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if(this->hitPoints == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead and can't be repaired" << std::endl;
		return;
	}
    if(this->hitPoints < 10 && this->energyPoints > 0)
    {
        this->hitPoints += amount;
        std::cout << "ClapTrap " << this->name << " is repaired by " << this->hitPoints << " points!" << std::endl;
		this->energyPoints --;
        return;
    }
	if(this->hitPoints >= 10)
		std::cout << "ClapTrap " << this->name << " doesn't need to be repaired" << std::endl;
	else
    	std::cout << "ClapTrap " << this->name << " doesn't have enough energy to be repaired" << std::endl;
	return;
}

std::string ClapTrap::getName() const
{
    return (this->name);
}

int ClapTrap::getHitPoints() const
{
    return (this->hitPoints);
}

int ClapTrap::getEnergyPoints() const
{
    return (this->energyPoints);
}

int ClapTrap::getAttackDamage() const
{
    return (this->attackDamage);
}

void ClapTrap::setName(std::string name)
{
    this->name = name;
}

void ClapTrap::setHitPoints(unsigned int hitPoints)
{
    this->hitPoints = hitPoints;
}

void ClapTrap::setEnergyPoints(unsigned int energyPoints)
{
    this->energyPoints = energyPoints;
}

void ClapTrap::setAttackDamage(unsigned int attackDamage)
{
    this->attackDamage = attackDamage;
}