#ifndef Dog_
#define Dog_

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal{
    public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();
    void makeSound() const;
    const std::string& getType() const;
};

#endif