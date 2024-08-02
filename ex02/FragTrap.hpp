#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap {
public:
  FragTrap();
  FragTrap(const std::string &name);
  ~FragTrap();
  FragTrap(const FragTrap &src);
  FragTrap &operator=(const FragTrap &src);

  void highFivesGuys(void);

private:
};

#endif
