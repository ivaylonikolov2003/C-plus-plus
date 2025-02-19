#include <iostream>

using namespace std;

class People {
protected:
    string name;
    int egn;

public:
    People(const string& name, const int& egn) {
        this->name = name;
        this->egn = egn;
    }
    string getName() const {
        return name;
    }
    int getEgn() const {
        return egn;
    }

    void display() const {
        cout << "Name: " << name << ", EGN: " << egn << endl;
    }
};

class Student : public People {
protected:
    string facultyNumber;
    double averageGrade;

public:
    Student(const string& name, const int& egn, const string& facultyNumber, double averageGrade) : People(name, egn) {
        this->facultyNumber = facultyNumber;
        this->averageGrade = averageGrade;
    }
    void display() const {
        People::display();
        cout << "Faculty Number: " << facultyNumber << ", Average Grade: " << averageGrade << endl;
    }

    double getAverageGrade() const {
        return averageGrade;
    }
};

class PStudent : public Student {
public:
    PStudent(const string& name, const int& egn, const string& facultyNumber, double averageGrade) : 
        Student(name, egn, facultyNumber, averageGrade) {}

    bool isEligibleForScholarship() const{
        return averageGrade > 4.5;
    }

    void display() const {
        Student::display();
        cout << "Scholarship Eligibility: " << (isEligibleForScholarship() ? "Yes" : "No") << endl;
    }
};

int main()
{
    Student student("Ivan Ivanov", 1234567890, "FN12345", 4.8);
    cout << "Student Information:" << endl;
    student.display();

    cout << endl;

    PStudent pStudent("Maria Petrova", 0413455632, "FN54321", 4.4);
    cout << "PStudent Information:" << endl;
    pStudent.display();

    return 0;
}
