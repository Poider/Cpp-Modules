#ifndef Cat_
#define Cat_

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal{
    public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();
    const std::string& getType() const;
    void makeSound() const;
};

#endif