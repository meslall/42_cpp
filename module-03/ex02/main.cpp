#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
    // ClapTrap a("a");
    // ClapTrap b("b");
    ScavTrap c("c");
	FragTrap d("d");

    
    // a.attack(b.getName());
    // b.takeDamage(a.getAttackDamage());
    // b.attack(a.getName());
    // a.takeDamage(b.getAttackDamage());
    // a.beRepaired(5);
    // b.beRepaired(5);
	c.attack(d.getName());
	d.takeDamage(c.getAttackDamage());
	d.attack(c.getName());
	c.takeDamage(d.getAttackDamage());
	d.highFivesGuys();
	c.guardGate();
    return (0);
}