#include <iostream>
using namespace std;

int main() {
    int *ptr = new int;  // Allocate memory for one integer
    *ptr = 50;

    cout << "Value stored at ptr: " << *ptr << endl;

    delete ptr;  // Free the memory
    return 0;
}

