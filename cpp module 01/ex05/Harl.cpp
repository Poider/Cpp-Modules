#include"Harl.hpp"

void Harl::debug(void)
{
    std::cout <<"debug: I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!"\
         << std::endl;
}

void Harl::info(void)
{
    std::cout << "info: I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" \
        << std::endl;
}

void Harl::warning(void)
{
    std::cout << "Warning: I think I deserve to have some extra bacon for free. I’ve been coming for ears whereas you started working here since last month." \
    << std::endl;
}

void Harl::error(void)
{
    std::cout << "Error: This is unacceptable! I want to speak to the manager now."<< std::endl;
}

void Harl::complain( std::string level )
{
    const char *lvl = level.c_str();
    void (Harl::*func)(void);
    char c = lvl[0];
    c = tolower(c);
    switch(c)
    {
        case 'd':
            func = &Harl::debug;
            break;
        
        case 'i':
            func = &Harl::info;
            break;
        
        case 'w':
            func = &Harl::warning;
            break;
        
        case 'e':
            func = &Harl::error;
            break;
    }
    (this->*func)();
}