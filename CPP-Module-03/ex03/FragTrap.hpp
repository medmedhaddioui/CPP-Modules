#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
    public:
        FragTrap();
        FragTrap(std::string  name);
        FragTrap(FragTrap const &Robj);
        FragTrap &operator=(FragTrap const &Robj);
        ~FragTrap();

        void highFivesGuys(void);
};

#endif