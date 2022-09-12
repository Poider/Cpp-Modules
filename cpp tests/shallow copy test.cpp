#include <iostream>
  using namespace std;
class Test{
    public:
    std::string name;
    
    Test(const std::string& name);
    void print();
};

void Test::print(){
    cout << name << endl;
}

Test::Test(const std::string& name) 
{
    this->name = name;
}

int main()
{   
  
    Test a(std::string("lol"));
    Test b(string("aoa"));

    a = b;
    b.name = string("dude");
    a.print();
    b.print();
}