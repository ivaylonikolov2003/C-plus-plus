#include <iostream>

using namespace std;

class Student{
public:
    string name;
    int age;
    double gpa;

    Student(string name, int age, double gpa) {
        this->name = name;
        this->age = age;
        this->gpa = gpa;
    }
};




int main()
{
    Student student1("SpongeBob", 25, 3.2);
    Student student2("Patrick", 40, 1.5);

    cout << student1.name<<'\n';
    cout << student1.age << '\n';
    cout << student1.gpa << '\n';

    cout << student2.name << '\n';
    cout << student2.age << '\n';
    cout << student2.gpa << '\n';
    return 0;
}

