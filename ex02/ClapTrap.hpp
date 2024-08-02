#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {
public:
  ClapTrap();
  ClapTrap(const std::string &name);
  ~ClapTrap();
  ClapTrap(const ClapTrap &src);
  ClapTrap &operator=(const ClapTrap &src);

  void attack(const std::string &target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);

protected:
  void setHitPoints(int hitPoints);
  void setEnergyPoints(int energyPoints);
  void setAttackDamage(int attackDamage);
  std::string getName() const;

private:
  std::string _name;
  int _hitPoints;
  int _energyPoints;
  int _attackDamage;
};

#endif
