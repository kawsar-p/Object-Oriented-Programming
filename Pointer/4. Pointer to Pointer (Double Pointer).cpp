#include <iostream>
using namespace std;

int main() {
    int x = 100;
    int *ptr = &x;
    int **dptr = &ptr;

    cout << "Value of x: " << x << endl;
    cout << "Value using single pointer: " << *ptr << endl;
    cout << "Value using double pointer: " << **dptr << endl;

    return 0;
}

