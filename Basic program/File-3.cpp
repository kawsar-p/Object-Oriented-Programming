// Factorial value

#include <iostream>
using namespace std;

int main() {
    int n, flag =1 ;
    cout << "Enter your value: ";
    cin >> n;
    
    for(int i = 1; i <= n ; i++){
    flag = flag * i;
    }
    
    cout << "Factorial = " << flag << endl;

    return 0;
}
