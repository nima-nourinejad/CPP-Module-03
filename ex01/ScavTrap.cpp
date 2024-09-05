#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) : ClapTrap(name) {
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap Constructor called for " << _name
            << std::endl;
}
ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor called for " << _name
            << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &src) : ClapTrap(src) {
  _hitPoints = 100;
  _energyPoints = 50;
  _attackDamage = 20;
  std::cout << "ScavTrap Copy constructor called for " << _name
            << std::endl;
}
ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
  if (this != &src) {
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
  }
  return *this;
}

void ScavTrap::attack(const std::string &target) {
  if (_hitPoints > 0 && _energyPoints > 0) {
    std::cout << "ScavTrap " << _name << " attacks " << target << ", causing "
              << _attackDamage << " points of damage!";
    _energyPoints--;
  } else
    std::cout << "ScavTrap " << _name << " can not attack " << target;
  std::cout << std::endl;
}

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << _name << " is now in Gate keeper mode."
            << std::endl;
}
