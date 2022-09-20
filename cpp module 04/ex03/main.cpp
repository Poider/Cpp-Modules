#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "AMateria.hpp"
void f()
{
    IMateriaSource *src = new MateriaSource();
    src->learnMateria(new Ice());
    src->learnMateria(new Cure());
    ICharacter *me = new Character("me");
    AMateria *tmp;
    tmp = src->createMateria("ice");
    me->equip(tmp);
    tmp = src->createMateria("cure");
    me->equip(tmp);
    ICharacter *bob = new Character("bob");
    me->use(0, *bob);
    me->use(1, *bob);
    me->unequip(0);
    delete bob;
    delete me;
    delete src;
    delete a;
    delete b;

}

int main()
{
    f();
     system("leaks interfaces");
    return (0);
}

// int main()
// {
//     {
//         Character garen("garen");

//         garen.equip(new Cure);
//         garen.equip(new Ice);
//         garen.use(1, garen);
//     }
//     system("leaks interfaces");
//     return 0;
// }