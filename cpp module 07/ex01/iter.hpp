#ifndef _ITER
#define _ITER

#include <iostream>

template <typename  T1, typename T2, typename T3>
    void iter(T1* arr, T2 len, T3* func)
    {
        for(T2 i = 0; i < len; i++)
        {
            func(arr[i]);
        }
    }


#endif