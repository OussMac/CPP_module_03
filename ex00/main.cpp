#include "ClapTrap.hpp"


int main() {
    ClapTrap ct1("TrapOne");
    ClapTrap ct2;

    ct1.attack("Target1");
    ct1.takeDamage(5);
    ct1.beRepaired(3);

    ct2.attack("Target2");
    ct2.takeDamage(12);
    ct2.beRepaired(4);

    return 0;
}