#ifndef Brain_
#define Brain_

#include <iostream>
#include <string>

class Brain{

    std::string ideas[100];

    public:
    
    Brain();
    Brain(const Brain& other);
    Brain& operator=(const Brain& other);
    ~Brain();
    const std::string& get_idea(int i);
    void set_idea(const std::string& idea, int index);
};

#endif