#include<iostream>
using namespace std;

class A{
int a;
public:
    A(int a){
    this -> a = a;

    }

    friend void display(A obj);
    friend class B;

};

void display(A obj){

cout << "A = " << obj.a << endl;
}

class B : public A {

public:
    B(int a) : A( a){
    }
void display(){
cout << "A = " << a << endl;

}
};

int main(){
A a1(10);
display(a1);

B obj1(100);
obj1.display();

return 0;
}
