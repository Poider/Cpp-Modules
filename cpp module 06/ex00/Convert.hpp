#ifndef _CONVERT
#define _CONVERT

#include <iostream>
#include <string>
#include <cmath>
#include <ios>
#include <iomanip>

#define UNUSED(x) (void)(x)

#define CHAR 0
#define INT 1 
#define FLOAT  2
#define DOUBLE 3
#define STRING 4
#define INVALID 5
#define SPECIAL 6

#define _PLUS_INFF 10
#define _MINUS_INFF 11
#define _MINUS_INF 12
#define _PLUS_INF 13
#define _NAN  14
#define _NANF 15

#define DISPLAYABLE 0
#define NONDISPLAYABLE 1
#define IMPOSSIBLE 2


#define PRECISION 2

class Convert{

int type;

int special_id;

char c;
int a;
float f;
double d;

int char_state;
int int_state;

void typeSet(const std::string& input);
int specialSet(const std::string& input);
void parseType(const std::string& input);

void set_literals(const std::string& input);
void set_char(const std::string& input);
void set_int(const std::string& input);
void set_float(const std::string& input);
void set_double(const std::string& input);
void set_invalid(const std::string& input);
void set_special(const std::string& input);

public:

Convert();
Convert(const std::string& input);
Convert(const Convert& other);
Convert& operator=(const Convert& other);
~Convert();

void print();
};


#endif
