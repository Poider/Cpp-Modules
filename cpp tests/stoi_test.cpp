#include <string>
#include <iostream>
#include <ios>
#include <cmath>
#include <iomanip>
#include <set>
int main(int argc, char* argv[], char* envp[])
{
    // using namespace std;
    // string a("12.03f");
    // // cout << stoi(a);
    // cout.setf(ios::fixed);
    // float b = NAN;
    // cout << setprecision(2) << b;
    // int *a = new int[0];
    std::multiset<int> set;

    set.insert(12);
    set.insert(13);
    std::cout << std::distance( set.find(13),set.begin()) << std::endl;
}