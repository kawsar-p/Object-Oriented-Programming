#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int *ptr = arr;  // Points to the first element

    cout << *ptr << endl;  // 10
    ptr++;                 // Move to the next element
    cout << *ptr << endl;  // 20
    ptr += 2;              // Move two steps forward
    cout << *ptr << endl;  // 40

    return 0;
}


