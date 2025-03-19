// Addition using function void type with perameter
// None

#include<iostream>
using namespace std;

void Addition(int a, int b){
    int sum;
    sum = a + b;
    cout << "Addition: " << sum << endl;
}

int main(){
    int a, b;
    cout << "Enter your first value: ";
    cin >> a;
    cout << "Enter your second value: ";
    cin >> b;
    Addition(a,b);
    
    return 0;
    
}
