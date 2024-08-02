#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
  ScavTrap();
  ~ScavTrap();
  ScavTrap(const ScavTrap &src);
  ScavTrap &operator=(const ScavTrap &src);

  void guardGate();

private:
};

#endif
