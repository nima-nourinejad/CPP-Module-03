#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap(){
  setHitPoints(100);
  setEnergyPoints(100);
  setAttackDamage(30);
  std::cout << "FragTrap Default constructor called" << std::endl;
}
FragTrap::FragTrap(const std::string &name) : ClapTrap(name) {
  setHitPoints(100);
  setEnergyPoints(100);
  setAttackDamage(30);
  std::cout << "FragTrap Constructor called for " << this->getName()
            << std::endl;
}
FragTrap::~FragTrap() {
  std::cout << "FragTrap Destructor called for " << this->getName()
            << std::endl;
}
FragTrap::FragTrap(const FragTrap &src) : ClapTrap(src) {
  setHitPoints(100);
  setEnergyPoints(100);
  setAttackDamage(30);
  std::cout << "FragTrap Copy constructor called for " << this->getName()
            << std::endl;
}
FragTrap &FragTrap::operator=(const FragTrap &src) {
  ClapTrap::operator=(src);
  return *this;
}
void FragTrap::highFivesGuys(){
  std::cout << "FragTrap " << this->getName() << " say HighFive"
            << std::endl;
}

