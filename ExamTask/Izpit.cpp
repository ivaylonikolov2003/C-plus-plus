#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Date {

private:
    int day, month, year;

public:
    Date(){}
    Date(int day, int month, int year) {
        this->day = day;
        this->month = month;
        this->year = year;
    }
    Date(const Date& other) {
        this->day = other.day;
        this->month = other.month;
        this->year = other.year;
    }

    friend ostream& operator << (ostream& Cout, const Date& date) {
        Cout << date.day << endl;
        Cout << date.month << endl;
        Cout << date.year << endl;
        return Cout;
    }
    int getAppoint() const {
        return year;
    }
    
};

class Patient {

private:
    string name;
    int egn;
    string illness;
    Date date;

public:
    Patient(const string& name, int egn, const string& illness, const Date& date) {
        this->name = name;
        this->egn = egn;
        this->illness = illness;
        this->date = date;
    }

    friend ostream& operator << (ostream& Cout, const Patient& patient) {
        Cout << patient.name << endl;
        Cout << patient.egn << endl;
        Cout << patient.illness << endl;
        Cout << patient.date << endl;
        return Cout;
    }

    int getDate() const{
        return date.getAppoint();
    }

    string getIllness() const {
        return illness;
    }
};

int main()
{
    Date date1(1, 1, 2022);
    Date date2(2, 2, 2023);
    Date date3(3, 3, 2024);

    Patient patient1("Acho", 1234543253, "Cough", date1);
    Patient patient2("Bacho", 1234543254, "Fever", date1);
    Patient patient3("Cacho", 1234543256, "Headache", date1);

    vector <Patient> patients = { patient1, patient2, patient3 };

    string illness;
    cout << "Enter illness:" << endl;
    cin >> illness;

    for (const auto& patient : patients) {
        if (patient.getIllness() == illness) {
            cout << patient << endl;
        }
    }

    return 0;
}
