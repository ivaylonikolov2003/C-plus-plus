#include <iostream>
#include <cmath>

using namespace std;

int main() {
	double a, b, c;
	
	cout << "Enter a: " << endl;
	cin >> a;
	cout << "Enter b: " << endl;
	cin >> b;

	c = sqrt(pow(a, 2) + pow(b, 2));

	cout << "C is: " << c << endl;

	return 0;
}