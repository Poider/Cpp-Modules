#ifndef _whatever
#define _whatever

#include <iostream>

template <typename T>
    void swap(T& a, T& b)
    {
        T tmp =  a;

        a = b;
        b = tmp;
    }

template <typename T>
    const T& min(const T& a,const T& b)
    {
        if(a >= b)
            return b;
        return a;
    }

template <typename T>
    const T& max(const T& a,const T& b)
    {
        if(a <= b)
            return b;
        return a;
    }

#endif