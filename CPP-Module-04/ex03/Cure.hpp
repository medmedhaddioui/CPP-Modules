#ifndef CURE_HPP
#define CURE_HPP
#include "AMateria.hpp"
class Cure : public AMateria
{
    public:
    Cure();
    Cure(std::string const & type);
    Cure(Cure const &Robj);
    Cure &operator=(Cure const &Robj);
    ~Cure();
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif