#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter size: ";
    cin >> n;
    
    int array[n];
    for(int i =0; i < n; i++){
        cout << "Elements[" << i+1 << "]: ";
        cin >> array[i];
    }
    cout << "\nDisplay: " << endl;
        for(int i =0; i < n; i++){
        cout << array[i] << ", ";
    }
    
    int search, found =0;
    cout << "\nSearch Elements: ";
    cin >> search;
        for(int i = 0; i < n; i++){
        if(array[i] == search){
            found = 1;
            cout << search << " Value found at index number: " << i+1 << endl;
            break;
        }
    }
    if(!found){
        cout << "Not Found" << endl;
    }
    
    return 0;
}
