#ifndef Cure_
#define Cure_

#include <iostream>
#include <string>
#include "AMateria.hpp"

class Cure : public AMateria{

    public:
    
    Cure();
    Cure(const Cure& other);
    Cure& operator=(const Cure& other);
    ~Cure();
    AMateria* clone() const;
    void use(ICharacter& target);
};

#endif