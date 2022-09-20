#ifndef _DATA
#define _DATA

#include <cmath>
#include <iostream>
#include <string>

typedef struct s_Data{
    char a;
    int b;
} Data;


Data* deserialize(uintptr_t raw);
uintptr_t serialize(Data* ptr);
#endif