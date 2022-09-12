
#ifndef Zombie_
#define Zombie_

#include <iostream>
#include <string>

class Zombie
{
    std::string name;
    

    public:
    Zombie();
    Zombie(const std::string& name);
    void init_zombie(const std::string& name);
    void announce();
    ~Zombie();
};

#endif