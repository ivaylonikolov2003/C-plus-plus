#include <iostream>

using namespace std;

class Person {
private:
    string name;
    int age;
    string country;

public:
    Person(string name, int age, string country) {
        this->name = name;
        this->age = age;
        this->country = country;
    }

    string getName() {
        return name;
    }
    int getAge() {
        return age;
    }
    string getCountry() {
        return country;
    }

    void setName(const string &name) {
        this->name = name;
    }
    void setAge(int age) {
        this->age = age;
    }
    void setCountry(const string& country) {
        this->country = country;
    }
};


int main()
{
    Person person1("Ivailo", 21, "Bulgaria");
    cout << person1.getName() << '\n';
    cout << person1.getAge() << '\n';
    cout << person1.getCountry() << '\n';

    person1.setName("Alex");
    person1.setAge(22);
    person1.setCountry("Austria");
    cout << person1.getName() << '\n';
    cout << person1.getAge() << '\n';
    cout << person1.getCountry() << '\n';
    
    return 0;
}
