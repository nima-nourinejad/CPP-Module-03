#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
  ClapTrap();
  setHitPoints(100);
  setEnergyPoints(50);
  setAttackDamage(20);
  std::cout << "ScavTrap Default constructor called" << std::endl;
}
ScavTrap::ScavTrap(const std::string &name) {
  std::cout << "ScavTrap Constructor called for " << _name << std::endl;
}
ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor called for " << _name << std::endl;
}
ScavTrap::ScavTrap(const ScavTrap &src)
    : _name(src._name), _hitPoints(src._hitPoints),
      _energyPoints(src._energyPoints), _attackDamage(src._attackDamage) {
  std::cout << "ScavTrap Copy constructor called for " << _name << std::endl;
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

void ScavTrap::guardGate() {
  std::cout << "ScavTrap " << _name << " is now in Gate keeper mode."
            << std::endl;
}
