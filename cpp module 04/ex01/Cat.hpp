#ifndef Cat_
#define Cat_

#include "Brain.hpp"
#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal{
    
    Brain* brain;

    public:
    Cat();
    Cat(const Cat& other);
    Cat& operator=(const Cat& other);
    ~Cat();
    const std::string& getType() const;
    void makeSound() const;
    const std::string& get_ideas(int index);
    void set_idea(const std::string& idea, int index);
};

#endif