#include <iostream>
using namespace std;

int main() {
    int *arr = new int[5];  // Allocate memory for an array of 5 integers

    for (int i = 0; i < 5; i++)
        arr[i] = (i + 1) * 10;

    for (int i = 0; i < 5; i++)
        cout << arr[i] << " ";

    delete[] arr;  // Free allocated memory
    return 0;
}

