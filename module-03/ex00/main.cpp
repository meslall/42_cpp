#include "ClapTrap.hpp"

int main()
{
    ClapTrap a("a");
    ClapTrap b("b");

    a.attack(b.getName());
    b.takeDamage(a.getAttackDamage());
    b.attack(a.getName());
    a.takeDamage(b.getAttackDamage());
    a.beRepaired(5);
    b.beRepaired(5);
    return (0);
}