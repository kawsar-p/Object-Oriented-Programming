#include <iostream>
using namespace std;

int main() {
    
int n1, n2, n3;

cout << "Enter your first value: ";
cin >> n1;
cout << "Enter your second value: ";
cin >> n2;
cout << "Enter your thired value: ";
cin >> n3;
cout << endl;

if(n1 > n2 && n1 > n3){
   cout << "The largest value = " << n1 << endl;
}
else if( n2> n1 && n2 > n3){
   cout << "The largest value = " << n2 << endl;
}

else if(n3>n1 && n3 > n2){
    cout << "The largest value = " << n3 << endl;
}

else {
   cout << "All are equal" << endl;
}

    return 0;
}
