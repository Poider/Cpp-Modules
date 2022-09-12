#include <iostream> 
class tes1 {
    protected:
    int a;

    public :
        tes1(){
            a = 10;
        }
        void area () {std::cout << "hello form tes1"  << std::endl ;}
};

class tes2 : public virtual tes1 {

    public:
    tes2(){a = 20;}
    void area () {std::cout << "hello form tes2 " << a << std::endl ;}
};

class tes3 : public virtual tes1 {
public:
tes3(){a = 30;}
void area () {std::cout << "hello form tes3 " << a << std::endl ;}
};

class tes4 : public tes3, public tes2 {
public:
void area () {std::cout << "hello form tes4 " << a << std::endl ;}
};

int main () {
    //std::cout < "old value ========== " << std::endl;
    //test
    {

    tes4 res;

    res.area();   
    }

     return 0;
}