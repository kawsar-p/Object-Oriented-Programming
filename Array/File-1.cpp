#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter your value: ";
    cin >> n;
    
    int array[n];
    
    for(int i = 0 ; i < n ; i++){
        cout << "Element [" << i + 1 << "] : ";
        cin >> array[i];
    }
    cout << endl;
    cout << "Elements: ";
  
      for(int i = 0 ; i < n ; i++){
      cout << array[i] << ",";
    }
    return 0;
}
