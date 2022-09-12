#ifndef HARL_
#define HARL_

#include <iostream>
#include <string>

class Harl
{
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    
    public:
    void (Harl::*func)(void);
    void complain( std::string level );
};

#endif