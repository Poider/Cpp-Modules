#include "Convert.hpp"

Convert::Convert()
{
    std::cout << "Convert : constructor called" << std::endl;
}

Convert::Convert(const std::string& input)
{
    special_id = -1;
    // f
    // a
    // c
    // d
    std::cout << "Convert : param constructor called" << std::endl;
    parseType(input);
    set_literals(input);////sets the type then puts the rest of the types converted in
}

Convert::Convert(const Convert& other)
{
    UNUSED(other);
    std::cout << "Convert : copy constructor called" << std::endl;
}

Convert& Convert::operator=(const Convert& other)
{
    UNUSED(other);    
    std::cout << "Convert : = operator called" << std::endl;
    return *this;
}

Convert::~Convert()
{
    std::cout << "Convert : destructor called" << std::endl;
}

void Convert::typeSet(const std::string& input)
{
    type = INT;
    for (unsigned int i = 0; i < input.size(); ++i)
    {
        if(input.find(".") != std::string::npos)
        {
            if(input[input.size() - 1] == 'f')
                type = FLOAT;
            else
                type = DOUBLE;
            
            break;
        }
    }
}

int Convert::specialSet(const std::string& input)
{
    if(input == "+inf")
    {
        special_id =  _PLUS_INF;
        return SPECIAL;
    }
    else if(input == "-inf")
    {
        special_id = _MINUS_INF;
        return SPECIAL;
    }
    else if(input == "+inff")
    {
        special_id = _PLUS_INFF;
        return SPECIAL;
    }
    else if(input == "-inff")
    {
        special_id = _MINUS_INFF;
        return SPECIAL;
    }
    else if(input == "nan")
    {
        special_id = _NAN;
        return SPECIAL;
    }
    else if(input == "nanf")
    {
        special_id = _NANF;     
        return SPECIAL;
    }
    else
        return INVALID;
}

void Convert::parseType(const std::string& input)
{
    //clean if only one char
    if(input.size() == 1 && (static_cast<int>(input[0]) < 48 || static_cast<int>(input[0]) > 57))
    {
        type = CHAR;
        return ;
    }

    //clean if theres a char inside the numbers or without numbers
    for(unsigned int i = 0; i < input.size(); ++i)
    {
        int ascii = static_cast<int>(input[i]);
        if((ascii < 48 || ascii > 57)  && input.size() > 1 )// means its char
            {   
                if((i == (input.size() - 1) && input[i] == 'f') || input[i] == '.')
                {
                    //do nothing
                }
                else
                {
                    type = specialSet(input);
                    return;
                }
            }
    }

    //goes in with only numbers
    typeSet(input);
}


void Convert::set_literals(const std::string& input)
{
    switch(type){
        case CHAR :
            set_char(input);
            break;
        case INT :
            set_int(input);
            break;
        case FLOAT :
            set_float(input);
            break;
        case DOUBLE :
            set_double(input);
            break;
        case INVALID :
            set_invalid(input);
            break;
        case SPECIAL :
            set_special(input);
            break;
    }

}


//check if char is printable in the print function


void Convert::set_char(const std::string& input)
{
    c = input[0];
    a = static_cast<int>(c);
    f = static_cast<float>(a);
    d = static_cast<double>(a);

    char_state = NONDISPLAYABLE;
    if(a >= 32 && a <= 127)
    char_state = DISPLAYABLE;
    int_state = DISPLAYABLE; 
}

void Convert::set_int(const std::string& input)
{
    a = std::stoi(input);
    c = static_cast<char>(a);
    f = static_cast<float>(a);
    d = static_cast<double>(a);

    char_state = NONDISPLAYABLE;
    if(a >= 32 && a <= 127)
    char_state = DISPLAYABLE;
    int_state = DISPLAYABLE; 

}

void Convert::set_float(const std::string& input)
{
    f = std::stof(input);
    a = static_cast<int>(f);
    c = static_cast<char>(a);
    d = static_cast<double>(f);

    char_state = NONDISPLAYABLE;
    if(a >= 32 && a <= 127)
    char_state = DISPLAYABLE;
    int_state = DISPLAYABLE; 
}

void Convert::set_double(const std::string& input)
{
    d = std::stod(input);
    f = static_cast<float>(d);
    a = static_cast<int>(d);
    c = static_cast<char>(a);

    char_state = NONDISPLAYABLE;
    if(a >= 32 && a <= 127)
    char_state = DISPLAYABLE;
    int_state = DISPLAYABLE; 
}

void Convert::set_invalid(const std::string& input)
{
    UNUSED(input);
    //on the print if invalid, print certain stuff
}

void Convert::set_special(const std::string& input)
{
    char_state = IMPOSSIBLE;
    int_state = DISPLAYABLE; 
    UNUSED(input);

    switch(special_id){
                case _PLUS_INFF:
                    a = INT_MAX;
                    f = +INFINITY;
                    d = +INFINITY;                  
                    break;
                case _MINUS_INFF:
                    a = INT_MIN;
                    f = -INFINITY;
                    d = -INFINITY; 
                    break;
                case _MINUS_INF:
                    a = INT_MIN;
                    f = -INFINITY;
                    d = -INFINITY; 
                    break;
                case _PLUS_INF:
                    a = INT_MAX;
                    f = +INFINITY;
                    d = +INFINITY;  
                    break;
                case _NAN:
                    int_state = IMPOSSIBLE;
                    f = NAN;
                    d = NAN;
                    break;
                case _NANF :
                    int_state = IMPOSSIBLE;
                    f = NAN;
                    d = NAN;
                    break;
    }
}


void Convert::print()//swap to switch
{
    if(type == INVALID)
    {
        std::cout << "char : " << "Invalid" << std::endl;
        std::cout << "int : " << "Invalid" << std::endl;
        std::cout << "float : " << "Invalid" << std::endl;
        std::cout << "double : " << "Invalid" << std::endl;
        return ;
    }
    else{
        std::cout << "Char : ";
        switch (char_state)
        {
            case DISPLAYABLE:
                std::cout << c << std::endl;
                break;
            case IMPOSSIBLE:
                std::cout << "IMPOSSIBLE" << std::endl;
                break;
            case NONDISPLAYABLE: 
                std::cout << "Non displayable" << std::endl;
                break;
        }
        std::cout << "int : ";
        switch (int_state)
        {
            case DISPLAYABLE:
                std::cout << a << std::endl;
                break;
            case IMPOSSIBLE:
                std::cout << "IMPOSSIBLE" << std::endl;
                break;
        }

        std::cout.setf(std::ios::fixed);
        std::cout << std::setprecision(PRECISION) << "float : " << f <<"f" << std::endl;
        std::cout << std::setprecision(PRECISION) << "double : " << d << std::endl;
    }
}