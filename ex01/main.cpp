#include "ScavTrap.hpp"

int main(void) {
    ScavTrap st1("ScavOne");
    ScavTrap st2;

    st1.attack("Target1");
    st1.takeDamage(30);
    st1.beRepaired(20);
    st1.guardGate();

    st2.attack("Target2");
    st2.takeDamage(60);
    st2.beRepaired(10);
    st2.guardGate();

    return 0;
}