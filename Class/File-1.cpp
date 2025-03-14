#include<iostream>
#include<string>
using namespace std;

class Student{
   public:
   string name;
   int id;
   int age;
   
   void Insert_Data(){
       cout << "Enetr your name: ";
       getline(cin,name);
       cout << "Enetr student ID: ";
       cin >> id;
       cout << "Eneter your age: ";
       cin >> age;
   }
   
   void Display_Data(){
       cout << "\nDisplay Data: " << endl << endl;
       cout << "Name: " << name << endl;
       cout << "Student ID: " << id << endl;
       cout << "Student: " << age << endl;
   }
   
   
};

int main(){
    Student s;
    s.Insert_Data();
    s.Display_Data();
    
    return 0;
}

