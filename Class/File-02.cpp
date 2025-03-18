#include <iostream>
#include <string>

using namespace std;

class Vehicle {
public:
    string name;
    int id;
    string manufactureDate;

    Vehicle(const string& name, int id, const string& date) 
        : name(name), id(id), manufactureDate(date) {}

    virtual void display() const {
        cout << "\nVehicle Name: " << name << endl;
        cout << "Vehicle ID: " << id << endl;
        cout << "Manufacturing Date: " << manufactureDate << endl;
    }

    virtual ~Vehicle() {}
};

class Car : public Vehicle {
public:
    string color;

    Car(const string& name, int id, const string& date, const string& color) 
        : Vehicle(name, id, date), color(color) {}

    void display() const override {
        cout << "\nCar Name: " << name << endl;
        cout << "Car ID: " << id << endl;
        cout << "Manufacturing Date: " << manufactureDate << endl;
        cout << "Car Color: " << color << endl;
    }
};

int main() {
    string vehicleName, manufactureDate;
    int vehicleId;

    cout << "Enter Vehicle Name: ";
    getline(cin, vehicleName);
    cout << "Enter Vehicle ID: ";
    cin >> vehicleId;
    
    cin.ignore();  

    cout << "Enter Manufacturing Date: ";
    getline(cin, manufactureDate);

    Vehicle v(vehicleName, vehicleId, manufactureDate);
    v.display();

    Car car1("Taxi", 69, "10/11/2022", "Black");
    car1.display();

    return 0;
}
