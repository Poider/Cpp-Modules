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
    virtual ~Cat();
    const std::string& getType() const;
    void makeSound() const;
};

#endif