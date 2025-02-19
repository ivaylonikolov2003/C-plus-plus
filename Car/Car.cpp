#include <iostream>

using namespace std;

class Car {
private:
    string company;
    string model;
    int year;

public:
    void setCompany(const string& company) {
        this->company = company;
    }
    void setModel(const string& model) {
        this->model = model;
    }
    void setYear(int year) {
        this->year = year;
    }
    string getCompany() {
        return company;
    }
    string getModel() {
        return model;
    }
    int getYear() {
        return year;
    }
};
int main()
{
    Car car;
    car.setCompany("Audi");
    car.setModel("A3");
    car.setYear(2008);

    cout << "Company is: " << car.getCompany() << '\n';
    cout << "Model is: " << car.getModel() << '\n';
    cout << "Year is: " << car.getYear() << '\n';
}
