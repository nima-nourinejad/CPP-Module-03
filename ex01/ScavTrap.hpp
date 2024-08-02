#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : private ClapTrap {
public:
  ScavTrap();
  ScavTrap(const std::string &name);
  ~ScavTrap();
  ScavTrap(const ScavTrap &src);
  ScavTrap &operator=(const ScavTrap &src);

  void guardGate();

private:
};

#endif
