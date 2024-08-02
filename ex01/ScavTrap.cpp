#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  setHitPoints(100);
  setEnergyPoints(50);
  setAttackDamage(20);
  std::cout << "ScavTrap Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  setHitPoints(100);
  setEnergyPoints(50);
  setAttackDamage(20);
  std::cout << "ScavTrap Constructor called for " << this->getName()
            << std::endl;
}
ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor called for " << this->getName()
            << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
  setHitPoints(100);
  setEnergyPoints(50);
  setAttackDamage(20);
  std::cout << "ScavTrap Copy constructor called for " << this->getName()
            << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
  ClapTrap::operator=(src);
  return *this;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << this->getName() << " is now in Gate keeper mode."
            << std::endl;
}
