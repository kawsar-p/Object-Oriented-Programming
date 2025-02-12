#include <iostream>
using namespace std;

void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    void (*funcPtr)() = &greet;  // Function pointer
    funcPtr();  // Call function using pointer

    return 0;
}

