#include "Classes.hpp"

class PhoneBook
{
    static Contact contact[8];
    static int     index;
    static int      count;
    public:
    PhoneBook();
    void Add(const Contact& contact);
    Contact& Search(int index)const;
    void display()const;
    int getCount()const;
    //displays the contact : index/first name/ last name/ nickname
    //each column displayed is 10 chars, right aligned text, if more than 10 chars > truncate and replace last char with .
    //show one field per line
};

//start by understanding what they mean for (Search method)
//check cheatsheet for string part and if i didnt check smth else yet on those categories
//shallow copy and deep copy
//try overloading an operator for fun, (to learn really)
//check cpp11 features
//Test::Test(const std::string& name) : name(name)
//if text.size >10 truncate it to 9 chars on the outputted new string and add . at the end