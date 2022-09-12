#ifndef Dog_
#define Dog_

#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal{

    Brain* brain;

    public:
    Dog();
    Dog(const Dog& other);
    Dog& operator=(const Dog& other);
    ~Dog();
    void makeSound() const;
    const std::string& getType() const;
    const std::string& get_ideas(int index);
    void set_idea(const std::string& idea, int index);
};

#endif