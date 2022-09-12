#include "Classes.hpp"

PhoneBook::PhoneBook()
{
    //empty constructor
}

void PhoneBook::Add(const Contact& contact)
{
    this->contact[index] = contact;
    index++;
    if (count < 8)
    count++;
    index = index % 8;
}


void PhoneBook::display()const
{
    for(int i = 0; i < count; i++)
        contact[i].display_index_info(i);
}

Contact& PhoneBook::Search(int index)const
{
    return contact[index % 8];
}