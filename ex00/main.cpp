#include "ClapTrap.hpp"

int main(void) {
	ClapTrap clapTrap("A");

    clapTrap.attack("target1");
    clapTrap.takeDamage(5);
    clapTrap.beRepaired(3);
    clapTrap.attack("target2");
    clapTrap.takeDamage(15);
    clapTrap.beRepaired(5);
  return 0;
}
