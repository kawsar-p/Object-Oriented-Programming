#include<iostream>
using namespace std;

class car{
public:
    int speed;

    car(int s){
    speed = s;
    }

    void operator --(){
    if(speed>= 10){
        speed = speed - 10;
    }
    else{
        speed = 0;
    }
}

    int getspeed (){
    return speed;
    }
};

int main(){
int speed;
cout << "Enter car speed: ";
cin >> speed;
car obj(speed);

while(obj.getspeed()> 0){
    cout << "Current speed is: " << obj.getspeed() << endl;
    --obj;
}

cout << "Current speed is: " << obj.getspeed() << endl;
cout << "Car Stop" << endl;

return 0;
}
