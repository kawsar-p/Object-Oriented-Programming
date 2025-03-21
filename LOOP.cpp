// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void for_loop(){
    int n = 5;
for(int i = 0; i < 5; i++){
    cout << i << endl;
    
}

}

void while_loop(){
    int n =5;
    int i = 0;
    while(i<n){
    cout << i << endl;
    i++;
}
}

void do_while_loop(){
    int n =5;
int i =0;
do{
    cout << i << endl;
    i++;
}
while(i<n);

}

int main() {
cout << "Menu" << endl;
cout << "1. For Loop" << endl;
cout << "2. While loop" << endl;
cout << "3. Do While loop" << endl;

cout << "Enter your choice: " << endl;
int choice;
cin >> choice;
cout << endl;

if(choice == 1){
    for_loop();
}
else if(choice ==2){
    while_loop();
}
else if(choice ==3){
    do_while_loop();
}
else{
    cout << "ERROR! Try again..." << endl;
}

    return 0;
}
