#include "Cat.hpp"

Cat::Cat()
{
    type = std::string("Cat");
    brain = new Brain();
    std::cout << "Cat : constructor called" << std::endl;
}

Cat::Cat(const Cat& other)
{
    std::cout << "Cat : copy constructor called" << std::endl;
    brain = new Brain();
    *brain = *(other.brain);
    type = other.type;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat : = operator called" << std::endl;
    *brain = *(other.brain);
    type = other.type;
    return *this;
}

Cat::~Cat()
{
    std::cout << "Cat : destructor called" << std::endl;
    delete brain;
}

void Cat::makeSound() const
{
    std::cout << "Cat Meow" << std::endl;
}

const std::string& Cat::getType() const
{
    return this->type;
}

const std::string& Cat::get_ideas(int index)
{
    return this->brain->get_idea(index % 100);
}

void Cat::set_idea(const std::string& idea, int index)
{
    brain->set_idea(idea, index % 100);
}