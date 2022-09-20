#include "Data.hpp"

int main()
{
    Data data;
    data.a = 's';
    data.b = 1337;
    std::cout << "data adress : " <<(void *)&data << std::endl;
    std::cout << data.a << std::endl;
    std::cout << data.b << std::endl;

    std::cout << "\n";

    uintptr_t t =  serialize(&data);
    std::cout <<"serialized int : " << t << std::endl;

    std::cout << "\n";

    Data *secondary = deserialize(t);
    std::cout <<"deserialized address : " << secondary << std::endl;
    std::cout << secondary->a << std::endl;
    std::cout << secondary->b << std::endl;

}