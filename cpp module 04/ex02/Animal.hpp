#ifndef Animal_
#define Animal_

#include <iostream>
#include <string>

class Animal{
    protected:
    std::string type;

    public:
    Animal();
    Animal(const Animal& other);
    Animal& operator=(const Animal& other);
    virtual ~Animal();
    const std::string& getType() const;
    virtual void makeSound() const = 0;
};


#endif