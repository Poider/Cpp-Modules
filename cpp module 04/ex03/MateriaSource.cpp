#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
    index = 0;
    for(int i = 0; i < 4; i++)
        materiasLearned[i] = 0;
    std::cout << "MateriaSource : constructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other)
{
    index = other.index;
    for (int i = 0; i < 4; i++)
    {
        if (other.materiasLearned[i])
            materiasLearned[i] = other.materiasLearned[i]->clone();
    }
    std::cout << "MateriaSource : copy constructor called" << std::endl;
}

MateriaSource& MateriaSource::operator=(const MateriaSource& other)
{
    index = other.index;
    for(int i = 0; i < 4; i++)
    {
        if (materiasLearned[i])
        {
            delete(materiasLearned[i]);
            materiasLearned[i] = 0;
        }
    }
    for (int i = 0; i < 4; i++)
    {
        if (other.materiasLearned[i])
            materiasLearned[i] = other.materiasLearned[i]->clone();
    }
    std::cout << "MateriaSource : = operator called" << std::endl;
    return *this;
}

MateriaSource::~MateriaSource()
{
    for(int i = 0; i < 4; i++)
    {
        if (materiasLearned[i])
        {
            delete(materiasLearned[i]);
            materiasLearned[i] = 0;
        }
    }
    std::cout << "MateriaSource : destructor called" << std::endl;
}

void MateriaSource::learnMateria(AMateria* materia)
{
    if(index != 4)
    {
        materiasLearned[index] = materia->clone();
        index++;
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for(int i = 0; i < 4; i++)
    {
        if(type == materiasLearned[i]->getType())
            return(materiasLearned[i]->clone());
    }
    return 0;
}
