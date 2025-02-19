#include <iostream>
#include <vector>

using namespace std;

class Vehicle {
private:
    string regNumber;
    string brand;
    string model;

public:
    Vehicle(string regNumber, string brand, string model) {
        this->regNumber = regNumber;
        this->brand = brand;
        this->model = model;
    }

    virtual ~Vehicle(){}

    void displayInfo() const{
        cout << "Reg number: "<<regNumber << endl;
        cout << "Brand: " <<brand<< endl;
        cout << "Model: " <<model<< endl;
    }
};

class Car : public Vehicle {
private:
    int doors;
    int engineVolume;

public:
    Car(string regNumber, string brand, string model, int doors, int engineVolume) : Vehicle(regNumber, brand, model) {
        this->doors = doors;
        this->engineVolume = engineVolume;
    }

    void displayInfo() const {
        Vehicle::displayInfo();
        cout << "Number of doors: " << doors << endl;
        cout << "Volume of engine: " << engineVolume << endl;
    }
};

class Truck : public Vehicle {
private:
    int maxLoad;
    int OsiCount;

public:
    Truck(string regNumber, string brand, string model, int maxLoad, int OsiCount) : Vehicle(regNumber, brand, model) {
        this->maxLoad = maxLoad;
        this->OsiCount = OsiCount;
    }

    void displayInfo() const {
        Vehicle::displayInfo();
        cout << "Max load is: " << maxLoad << endl;
        cout << "Count of Osi is: " << OsiCount << endl;
     }

};

int main()
{
    Car car1("34343", "Mercedes", "C220", 4, 500);
    Car car2("122222", "BMW", "F10", 2, 1000);
    Car car3("11111", "Audi", "A4", 2, 700);
    Truck truck1("500000", "Scania", "Turbo", 700, 8);
    Truck truck2("600000", "Jeep", "Power", 500, 6);
    Truck truck3("700000", "Scania1", "Sport+", 400, 4);

    vector<Vehicle*> vehicles = { &car1, &car2, &car3, &truck1, &truck2, &truck3 };

    cout << "Cars information:" << endl;

    for (const auto& vehicle : vehicles) {
        if (dynamic_cast<Car*>(vehicle)) {
            vehicle->displayInfo();
            cout << "-----------------------------" << endl;
        }

    }
    return 0;
}
