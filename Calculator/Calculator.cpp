#include <iostream>

using namespace std;

int main() {
	char op;
	double num1, num2;
	double result;

	cout << "*********** CALCULATOR ***************" << endl;

	cout << "Enter either(+ - * /): ";
	cin >> op;

	cout << "Enter number 1: ";
	cin >> num1;

	cout << "Enter number 2: ";
	cin >> num2;

	switch (op)
	{
		case '+':
			result = num1 + num2;
			cout << "result: " << result << endl;
			break;
		case '-':
			result = num1 - num2;
			cout << "result: " << result << endl;
			break;
		case '*':
			result = num1 * num2;
			cout << "result: " << result << endl;
			break;
		case '/':
			result = num1 / num2;
			cout << "result: " << result << endl;
			break;
		default:
			cout << "That wasn't a valid response" << endl;
			break;
	}

	cout << "**************************************";


	return 0;
}