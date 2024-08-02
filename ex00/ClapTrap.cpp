#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
    : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string &name)
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) {
  std::cout << "Constructor called for " << _name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &src)
    : _name(src._name), _hitPoints(src._hitPoints),
      _energyPoints(src._energyPoints), _attackDamage(src._attackDamage) {
  std::cout << "Copy constructor called for " << _name << std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
  if (this != &src) {
    _name = src._name;
    _hitPoints = src._hitPoints;
    _energyPoints = src._energyPoints;
    _attackDamage = src._attackDamage;
  }
  return *this;
}

ClapTrap::~ClapTrap() {
  std::cout << "Destructor called for " << _name << std::endl;
}

void ClapTrap::attack(const std::string &target) {
  if (_hitPoints > 0 && _energyPoints > 0) {
    std::cout << "ClapTrap " << _name << " attacks " << target << ", causing "
              << _attackDamage << " points of damage!" << std::endl;
    _energyPoints--;
  }
}

void ClapTrap::takeDamage(unsigned int amount) {
  _hitPoints -= static_cast<int>(amount);
  if (_hitPoints < 0)
    _hitPoints = 0;
  std::cout << "ClapTrap " << _name << " takes " << amount
            << " points of damage!"
            << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
  if (_hitPoints > 0 && _energyPoints > 0) {
    _hitPoints += static_cast<int>(amount);
    _energyPoints--;
    std::cout << "ClapTrap " << _name << " repairs itself, gaining " << amount
              << " hit points! Current hit points: " << _hitPoints << std::endl;
  }
}