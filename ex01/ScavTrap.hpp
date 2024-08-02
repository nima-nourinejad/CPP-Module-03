#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {
public:
  ScavTrap();
  ~ScavTrap();
  ScavTrap(const ScavTrap &src);
  ScavTrap &operator=(const ScavTrap &src);

private:
};

std::ostream &operator<<(std::ostream &out, const ScavTrap &src);

#endif
