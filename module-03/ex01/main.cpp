#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    ClapTrap a("a");
    ClapTrap b("b");
    ScavTrap c("c");

    
    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());
    a.beRepaired(5);
    b.beRepaired(5);
    c.attack(a.getName());
    return (0);
}