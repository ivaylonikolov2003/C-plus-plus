#include <iostream>
using namespace std;

class Temperature {
protected:
    double temperature; 

public:
    virtual void setTemperature(double temp) = 0;
    virtual double getTemperature() const = 0;
    virtual double toCelsius() const = 0;
    virtual double toFahrenheit() const = 0;

    virtual ~Temperature() {}
};


class Celsius : public Temperature {
public:
    void setTemperature(double temp) override {
        temperature = temp;
    }

    double getTemperature() const override {
        return temperature;
    }

    double toCelsius() const override {
        return temperature;
    }

    double toFahrenheit() const override {
        return (temperature * 9.0 / 5.0) + 32;
    }
};

class Fahrenheit : public Temperature {
public:
    void setTemperature(double temp) override {
        temperature = temp;
    }

    double getTemperature() const override {
        return temperature;
    }

    double toCelsius() const override {
        return (temperature - 32) * 5.0 / 9.0;
    }

    double toFahrenheit() const override {
        return temperature;
    }
};

int main() {
    Temperature* temp;

    double input;
    int choice;

    cout << "Choose temperature type:\n1. Fahrenheit\n2. Celsius\nYour choice: ";
    cin >> choice;

    if (choice == 1) {
        temp = new Fahrenheit();
        cout << "Enter temperature in Fahrenheit: ";
        cin >> input;
        temp->setTemperature(input);
        cout << "Temperature in Celsius: " << temp->toCelsius() << endl;
    }
    else if (choice == 2) {
        temp = new Celsius();
        cout << "Enter temperature in Celsius: ";
        cin >> input;
        temp->setTemperature(input);
        cout << "Temperature in Fahrenheit: " << temp->toFahrenheit() << endl;
    }
    else {
        cout << "Invalid choice!" << endl;
        return 1;
    }

    delete temp;
    return 0;
}
