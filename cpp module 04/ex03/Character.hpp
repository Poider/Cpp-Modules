#ifndef Character_
#define Character_

#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"


class Character : public ICharacter{

    AMateria *inventory[4];
    std::string name;
    int equipped;
    AMateria *uniquepped[1000];

    public:
    
    Character();
    Character(const std::string& name);
    Character(const Character& other);
    Character& operator=(const Character& other);
    ~Character();

    std::string const & getName() const;
    void equip(AMateria* m);
    void unequip(int idx);
    void use(int idx, ICharacter& target);
};

#endif