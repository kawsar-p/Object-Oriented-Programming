#include<iostream>
using namespace std;

void Matrix(){
    
    int row,col;
    cout << "Enter row number: ";
    cin >> row;
    cout << "Enter colum number: ";
    cin >> col;
    
    int matrix[row][col];
    cout << endl;
    
    for(int i =0; i < row; i++){
        for(int j= 0; j < col; j++){
            cout << "Elements: [" << i+1 << "] [" << j +1 << "]: ";
            cin >> matrix[i][j];
        }
    }
    cout << "\nThe matrix: " << endl;
        for(int i = 0; i < row; i++){
        for(int j = 0; j < col; j++){

            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    
}

int main(){
    
    Matrix();
    
    return 0;
}
