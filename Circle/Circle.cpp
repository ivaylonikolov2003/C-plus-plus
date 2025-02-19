#include <iostream>

using namespace std;
const double PI = 3.14159;

class Circle {
private:
	double radius;

public:
	Circle(double radius) {
		this->radius = radius;
	}

	double calculateArea() {
		return PI * radius * radius;
	}
	double circumference() {
		return PI * 2 * radius;
	}
};

int main()
{
	double radius;
	cout << "Input the radius of a circle: \n";
	cin >> radius;
	Circle circle1(radius);
	
	double area = circle1.calculateArea();
	cout << "Area is: " << area << '\n';

	double circumference = circle1.circumference();
	cout << "Circumference is: " << circumference << '\n';

	return 0;
}
