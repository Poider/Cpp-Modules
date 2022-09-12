#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain : constructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    for(int i = 0; i < 100 ; i++)
        ideas[i] = other.ideas[i];
    std::cout << "Brain : copy constructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
    for(int i = 0; i < 100 ; i++)
        ideas[i] = other.ideas[i];
    std::cout << "Brain : = operator called" << std::endl;
    return *this;
}

Brain::~Brain()
{
    std::cout << "Brain : destructor called" << std::endl;
}

const std::string& Brain::get_idea(int i)
{
    return ideas[i];
}

void Brain::set_idea(const std::string& idea, int index)
{
    ideas[index] = idea;
}