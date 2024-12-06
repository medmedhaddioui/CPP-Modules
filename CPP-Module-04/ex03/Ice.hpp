#ifndef ICE_HPP
#define ICE_HPP
#include "AMateria.hpp"

class Ice : public AMateria
{
    public:
    Ice();
    Ice(std::string const & type);
    Ice(Ice const &Robj);
    Ice &operator=(Ice const &Robj);
    ~Ice();
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif