#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap Default constructor called" << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap Constructor called for " << _name
            << std::endl;
}
FragTrap::~FragTrap() {
  std::cout << "FragTrap Destructor called for " << _name
            << std::endl;
}
FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
  _hitPoints = 100;
  _energyPoints = 100;
  _attackDamage = 30;
  std::cout << "FragTrap Copy constructor called for " << _name
            << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &src) {
  ClapTrap::operator=(src);
  return *this;
}
void FragTrap::highFivesGuys(){
  std::cout << "FragTrap " << _name << " say HighFive"
            << std::endl;
}

