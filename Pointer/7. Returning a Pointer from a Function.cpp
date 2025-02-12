#include <iostream>
using namespace std;

int* createNumber() {
    int *num = new int(42);  // Dynamic allocation
    return num;
}

int main() {
    int *ptr = createNumber();
    cout << "Value: " << *ptr << endl;
    delete ptr;  // Free memory
    return 0;
}

