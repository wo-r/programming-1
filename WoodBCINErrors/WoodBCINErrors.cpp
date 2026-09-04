// Ignores any formatting and specifically tries to show bad programming and errors and other small things.

#include <iostream>
using namespace std;

int main()
{
	// declare variables
	int int1, int2;
	double dbl;
	char ch;

	// statement
	cout << "This program is designed to read 2 integers, followed by \n";
	cout << "a double, followed by a character." << endl << endl;

	cout << "Input an integer, an integer, a double, and a character (seperated by spaces): ";
	cin >> int1 >> int2 >> dbl >> ch; // allows for multiple pieces of information (removes lots of code)

	cout << "Integer 1: " << int1 << endl;
	cout << "Integer 2: " << int2 << endl;
	cout << "Double: " << dbl << endl;
	cout << "Character: " << ch << endl;

	return 0;
}
