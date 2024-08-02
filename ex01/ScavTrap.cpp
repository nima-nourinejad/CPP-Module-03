#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {}
ScavTrap::~ScavTrap() {}
ScavTrap::ScavTrap(const ScavTrap &src) {}
ScavTrap &ScavTrap::operator=(const ScavTrap &src) {}

void ScavTrap::guardGate() {
  std::cout <<"ScavTrap " << _name<<" is now in Gate keeper mode." << std::endl;
}
