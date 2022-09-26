#include "Character.hpp"

Character::Character()
{
    name = std::string("Character");
    equipped = 0;
    for(int i = 0; i < 4; i++)
        inventory[i] = 0;
    for(int i = 0; i < 100; i++)
        uniquepped[i] = 0;
    std::cout << "Character : constructor called" << std::endl;
}

Character::Character(const std::string& name)
{
    std::cout << "Character : copy constructor called" << std::endl;
    equipped = 0;
    for(int i = 0; i < 4; i++)
        inventory[i] = 0;
    for(int i = 0; i < 100; i++)
        uniquepped[i] = 0;
    this->name = name;
}

Character::Character(const Character& other)
{
    std::cout << "Character : copy constructor called" << std::endl;
    this->name = other.name;
    equipped = other.equipped;
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
    }
    for(int i = 0; i < 100; i++)
        uniquepped[i] = 0;
}

Character& Character::operator=(const Character& other)
{
    std::cout << "Character : = operator called" << std::endl;
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i])
        {
            delete(inventory[i]);
            inventory[i] = 0;
        }
    }
    this->name = other.name;
    equipped = other.equipped;
    for (int i = 0; i < 4; i++)
    {
        if (other.inventory[i])
            inventory[i] = other.inventory[i]->clone();
    }
    return *this;
}

Character::~Character()
{
    for(int i = 0; i < 4; i++)
    {
        if (inventory[i])
        {
            delete(inventory[i]);
            inventory[i] = 0;
        }
    }
    for(int i = 0; uniquepped[i] != NULL; i++)
        delete(uniquepped[i]);
    std::cout << "Character : destructor called" << std::endl;
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    if(equipped == 4)
        return;
    for(int i = 0; i < 4; i++)
    {
        if(!inventory[i])
        {
            inventory[i] = m;
            break;
        }
    }
    equipped++;
}

void Character::unequip(int idx)
{
    int i = 0;
    int flag = 0 ;
    while(uniquepped[i])
        i++;
    if(inventory[idx])
    {
        for(int j = 0; j < 1000; j++)
        {
            if(inventory[idx] ==  uniquepped[j])
                flag = 1;
        }
        if(flag == 0)
            uniquepped[i] = inventory[idx];
        inventory[idx] = 0;
        equipped--;
    }
}

void Character::use(int idx, ICharacter& target)
{
    if(inventory[idx])
    {
        inventory[idx]->use(target);
    }
}
