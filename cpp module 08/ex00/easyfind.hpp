#ifndef _easyfind
#define _easyfind

#include <iostream>
#include <algorithm>

class NotFoundException : public std::exception {

public :

const char *what() const _NOEXCEPT
{
    return "Not found";
};

};


template <typename T>
    int easyfind(T container, int b)
    {

        //check if container is container?
        
        typename T::iterator it = std::find(container.begin(), container.end(),b);
        if(it == container.end())
            throw NotFoundException();
        else
        return std::distance(container.begin(),it);
    }

#endif