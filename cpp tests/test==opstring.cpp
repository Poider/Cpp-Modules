#include <string>
#include <iostream>

int main(int argc, char* argv[])
{
    using namespace std;

    string abc("hehe");

    if(abc == "heh")
    cout << "equals" << endl;
    else    
    cout << "nope" << endl;
}