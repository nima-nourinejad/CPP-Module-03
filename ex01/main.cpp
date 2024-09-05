#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
  ClapTrap clapTrap("A");
  clapTrap.attack("target1");
  clapTrap.takeDamage(5);
  clapTrap.beRepaired(3);
  clapTrap.attack("target2");
  clapTrap.takeDamage(15);
  clapTrap.beRepaired(5);
  std::cout << std::endl;

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
