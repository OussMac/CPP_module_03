#include "FragTrap.hpp"

int main() {
    FragTrap ft1("FragOne");
    FragTrap ft2;

    ft1.attack("Target1");
    ft1.takeDamage(40);
    ft1.beRepaired(20);
    ft1.highFivesGuys();

    ft2.attack("Target2");
    ft2.takeDamage(50);
    ft2.beRepaired(30);
    ft2.highFivesGuys();

    return 0;
}
