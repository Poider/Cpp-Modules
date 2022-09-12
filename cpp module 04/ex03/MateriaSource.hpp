#ifndef MateriaSource_
#define MateriaSource_

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {
    AMateria *materiasLearned[4];
    int index;
    
    public:
    MateriaSource();
    MateriaSource(const MateriaSource& other);
    MateriaSource& operator=(const MateriaSource& other);
    ~MateriaSource();

    void learnMateria(AMateria*);
    AMateria* createMateria(std::string const & type);
};



#endif