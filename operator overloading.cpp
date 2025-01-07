// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class complex{
    int a;
    int b;
    public:
    complex(int a=0, int b=0){
        this-> a =a;
        this-> b = b;
    }
    complex operator + (complex const &obj){
        complex res;
        res.a = a + obj.a;
        res.b = b + obj.b;
        return res;
    }
    void display(){
        cout << a << "+ i" << b << endl;
    }
};

int main() {
    complex c1(10,20), c2(20,20);
    complex c3 = c1+c2;
    c3.display();

    return 0;
}
