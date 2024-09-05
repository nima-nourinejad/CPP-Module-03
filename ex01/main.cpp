#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  ScavTrap scavTrap("B");
  scavTrap.attack("target3");
  scavTrap.takeDamage(10);
  scavTrap.beRepaired(20);
  scavTrap.attack("target4");
  scavTrap.takeDamage(30);
  scavTrap.beRepaired(25);
  scavTrap.guardGate();
  std::cout << std::endl;
  return 0;
}
