#include "Header.hpp"
#include "Classes.hpp"

//initializing static variables
Contact PhoneBook::contact[8]; 
int PhoneBook::index = 0;
int PhoneBook::count = 0;

void add_to_phonebook(PhoneBook& phonebook)
{
    Contact contact;
    contact.addContact();
    if(!contact.empty)
    {
        phonebook.Add(contact);
        std::cout << "Contact added to phonebook" << std::endl;
    }
    else
        std::cout << ">>>>>>Contact had an empty slot" << std::endl;
}

void search_phonebook(const PhoneBook& phonebook)
{
    int index;
    std::string index_string;

    phonebook.display();
    std::cout << "What index do you want to see full"<< std::endl;
    getline(std::cin, index_string);
    try{
    index = std::stoi(index_string);
    if(index >= phonebook.getCount())
        throw std::invalid_argument("Index out of range");
    }
    catch(std::exception& e){
        std::cout<< "index wrong" << std::endl;
        return;
    }
    const Contact& contact = phonebook.Search(index);
    contact.display_single_contact();
}

int main()
{
    std::string prompt_read;
    PhoneBook phonebook;   
    while(1)
    {
        std::cout << "ADD, SEARCH OR EXIT?" << std::endl;
        getline(std::cin,prompt_read);// use getline() // cus it reads it all as a string
        if(prompt_read == "ADD")
            add_to_phonebook(phonebook);
        else if(prompt_read =="SEARCH")
            search_phonebook(phonebook);
        else if(prompt_read == "EXIT")
            exit(0); 
        //in case of cin fail
        // std::cin.clear();
        // std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
}
//put exception to catch problem of stoi-
//extern
//std::atoi vs atoi 
//segfault with exception in index stoi // cus weird index and it puts that in a array to access the index
//
