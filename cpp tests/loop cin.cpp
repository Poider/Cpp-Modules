#include <iostream>

int main(int argc, char **argv)
{
    using namespace std;

    int a;
    while(1)
    {
        cout << "we in" << endl;
        
        cin >> a;
        cin.clear();
        cin.ignore(std::numeric_limits<streamsize>::max(), '\n');
    }
}