#include <iostream>
using namespace std;

int main() {
    int x = 10;
    int *ptr = &x;  // ptr stores the address of x

    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Pointer ptr stores: " << ptr << endl;
    cout << "Value pointed by ptr: " << *ptr << endl;  // Dereferencing

    return 0;
}

