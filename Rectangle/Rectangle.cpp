#include <iostream>

using namespace std;

class Rectangle {
private:
    double lenght;
    double width;

public:
    Rectangle(double lenght, double width) {
        this->lenght = lenght;
        this->width = width;
    }

    double CalculateArea() {
        return lenght * width;
    }

    double CalculatePerimiter() {
        return 2 * (lenght + width);
    }
};

int main()
{
    double lenght;
    double width;

    cout << "Enter a lenght of a rectangle: " << '\n';
    cin >> lenght;

    cout << "Enter a width of a rectangle: " << '\n';
    cin >> width;

    Rectangle rectangle1(lenght, width);

    double area = rectangle1.CalculateArea();
    double perimiter = rectangle1.CalculatePerimiter();

    cout << "Area: " << area << '\n';
    cout << "Perimiter: " << perimiter << '\n';

    return 0;
}
