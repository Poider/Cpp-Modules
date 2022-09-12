#ifndef WrongCat_
#define WrongCat_

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal{
    public:
    WrongCat();
    WrongCat(const WrongCat& other);
    WrongCat& operator=(const WrongCat& other);
    ~WrongCat();
    const std::string& getType() const;
    void makeSound() const;
};

#endif