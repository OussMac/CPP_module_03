#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Default_FragTrap") {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " constructed with default values." << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name) {
    hitPoints = 100;
    energyPoints = 100;
    attackDamage = 30;
    std::cout << "FragTrap " << name << " constructed." << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    std::cout << "FragTrap " << name << " copied." << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    std::cout << "FragTrap " << name << " assigned." << std::endl;
    return *this;
}

FragTrap::~FragTrap() {
    std::cout << "FragTrap " << name << " destructed." << std::endl;
}

void FragTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        energyPoints--;
        std::cout << "FragTrap " << name << " attacks " << target 
                  << ", causing " << attackDamage << " points of damage!" << std::endl;
    } else {
        std::cout << "FragTrap " << name << " cannot attack due to insufficient energy or hit points." << std::endl;
    }
}

void FragTrap::highFivesGuys(void) {
    std::cout << "FragTrap " << name << " requests a positive high five! ✋" << std::endl;
}
