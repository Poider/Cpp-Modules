#include "Dog.hpp"

Dog::Dog()
{
    type = std::string("Dog");
    brain = new Brain();
    std::cout << "Dog : constructor called" << std::endl;
}

Dog::Dog(const Dog& other)
{
    std::cout << "Dog : copy constructor called" << std::endl;
    brain = new Brain();
    *brain = *(other.brain);
    type = other.type;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog : = operator called" << std::endl;
    delete brain;
    *brain = *(other.brain);
    type = other.type;
    return *this;
}

Dog::~Dog()
{
    std::cout << "Dog : destructor called" << std::endl;
    delete brain;
}

void Dog::makeSound() const
{
    std::cout << "Dog Woof" << std::endl;
}

const std::string& Dog::getType() const
{
    return this->type;
}

const std::string& Dog::get_ideas(int index)
{
    return this->brain->get_idea(index%100);
}


void Dog::set_idea(const std::string& idea, int index)
{
    brain->set_idea(idea, index%100);
}