#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
    Cat *c1 = new Cat();
    Cat *c2 = new Cat();
    // Cat *c3 = new Cat();
    // std::cout << (void *)c1 << std::endl;
    // std::cout << (void *)c2 << std::endl;

    c1->set_idea("hi",0);
    std::cout <<"_"<<c1->get_ideas(0) << std::endl;
    std::cout <<"_"<<c2->get_ideas(0) << std::endl;

    *c2 = *c1;

    c1->set_idea("hoho",0);
    std::cout <<"_"<<c1->get_ideas(0) << std::endl;
    std::cout <<"_"<<c2->get_ideas(0) << std::endl;
    delete c1;
    delete c2;
}
