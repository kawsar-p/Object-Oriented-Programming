#include<iostream>
using namespace std;

class Animal{
public:
    virtual display(){
    cout << "Base class" << endl;
    }

    virtual ~Animal(){
    cout << "Animal class destructor" << endl;
    }
};

class Dog : public Animal{
public:
    display(){
    cout << "Dog class" << endl;
    }

   ~Dog(){
    cout << "Dog class destructor" << endl;
    }
};

class Cat : public Animal{
public:
    display(){
    cout << "Cat class" << endl;
    }

    ~Cat(){
    cout << "Cat class destructor" << endl;
    }

};

int main(){
    /*

Animal* obj;
Dog obj1;
Cat obj2;

obj = &obj1;
obj->display();

obj = &obj2;
obj->display();

*/
 // Alternative way

 Animal* obj;

 obj = new Dog();
 obj->display();
 delete obj;

 obj = new Cat();
 obj->display();
 delete obj;

return 0;
}
