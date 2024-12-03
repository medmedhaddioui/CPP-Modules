#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "AMateria.hpp"
 
class MateriaSource
{
    private:
        AMateria *A[4];
        int id;
    public:
    MateriaSource() ;
    MateriaSource(std::string const & name);
    MateriaSource(MateriaSource const &Robj);
    MateriaSource &operator=(MateriaSource const &Robj);
    ~MateriaSource();

    void learnMateria(AMateria* materia);
    AMateria* createMateria(std::string const & type);
};
#endif