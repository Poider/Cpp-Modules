#include "easyfind.hpp"
#include <vector>
using namespace std;

int main()
{

    vector <int>  vect;
    vect.push_back(1);
    vect.push_back(2);
    vect.push_back(3);
    vect.push_back(4);
    std::cout << easyfind(vect,13);
}