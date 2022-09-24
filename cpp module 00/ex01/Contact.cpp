#include "Classes.hpp"
#include "Header.hpp"

Contact::Contact()
{
   empty = 0;
}


void Contact::addContact()
{
    std::string number;

    std::cout << "Enter first name / last name / nickname / dark secret / phone number"<< std::endl;
    std::cout <<"first name"<<std::endl;
    getline(std::cin,first_name );
    std::cout << "last name"<<std::endl;
    getline(std::cin, this->last_name);
    std::cout << "nickname"<<std::endl;
    getline(std::cin, this->nickname );
    std::cout << "dark secret"<<std::endl;
    getline(std::cin, this->dark_secret);
    std::cout << "phone number"<<std::endl;
    getline(std::cin, number);
    
    if(number.empty() || first_name.empty() || last_name.empty() || nickname.empty() || dark_secret.empty())
        empty = 1;
    try{
    this->phone_number = std::stod(number);
    }
    catch(std::exception& e) {
    this->phone_number = 911;
    }
}


std::string shorten_string(const std::string& str)
{
    std::string shortened;

    if(str.length() > 10)
    {
        shortened = str.substr(0, 9) + ".";
        return shortened;
    }
    return str;
}

void Contact::display_index_info(int i)
{
    std::cout << std::right << std::setw(10) << i << "|" \
                << std::setw(10) << shorten_string(first_name) << "|" \
                << std::setw(10) << shorten_string(last_name) << "|"\
                << std::setw(10)<< shorten_string(nickname) \
            << std::endl;
    //USE IOMANIPS HERE
}

void Contact::display_single_contact()const
{
    std::cout<< "First name :" <<first_name<< std::endl;
    std::cout<< "Last name :" <<last_name << std::endl;
    std::cout<< "Nickname :" <<nickname << std::endl;
    std::cout<< "Dark secret :"<<dark_secret << std::endl;
    std::cout<< "Phone number :" <<phone_number << std::endl;
}