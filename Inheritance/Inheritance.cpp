#include <iostream>

using namespace std;

class Animal {
public:
    bool alive = true;

    void eat() {
        cout << "NOW NOMW !\n";
    }
};

class Dog : public Animal{
public:
    void bark() {
        cout << "The dog goes woof!\n";
    }
};
class Cat : public Animal {
public:
    void meow() {
        cout << "The cat goes meow!\n";
    }
};

int main()
{
    Dog dog;
    Cat cat;

    cout << dog.alive << '\n';
    dog.eat();
    dog.bark();
    cat.meow();
    return 0;
}
