#include "Header.hpp"
class Contact
{
    std::string first_name, last_name, nickname, dark_secret;
    double phone_number;
    public:

    Contact();
    void addContact();
    void display_index_info(int index);// with the iopmanips also do the truncating if +10
    void display_single_contact()const;
};
//make iomanips and complete main then check logic if its right for each thing said in the subject