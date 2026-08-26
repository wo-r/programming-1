// BradenWages.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Braden Wood
// 8/26/26
// Wages V1: this program will ask the user for info, calucate wages, print to the console.

// libaries
#include <iostream>
#include <string>

using namespace std;

// constant variables
const double TAX_RATE = .10; // Remains constant; Non constant example: double TAX_RATE;

int main()
{
	// declare variables
	string fName;
	string lName;
	double hoursWorked;
	double hourlyWage;
	double net;
	double gross;

	// program title/description
	cout << "Wages Program\n";
	cout << "Created By: Braden Wood\n";
	cout << "This program will ask the user for their first name and last name, hours worked,\n";
	cout << "and hourly wage. We will calculate the net and gross pay and print to the console.\n\n";

	// collect user input
	cout << "Enter your first name: ";
	cin >> fName; // operator switches due to input
	cout << "Enter your last name: ";
	cin >> lName;
	cout << "Enter your hours worked this week (can be partial hours): ";
	cin >> hoursWorked;
	cout << "Enter your hourly wage (E.x: 18.26): ";
	cin >> hourlyWage;
	
	// net & gross calculations
	gross = hourlyWage * hoursWorked;
	net = gross - (gross * TAX_RATE);

	// output to console
	cout << "\n\n";
	cout << fName << " " << lName << "\n\n";
	cout << "Your gross pay is: $" << gross << "\n\n";
	cout << "Your net pay is: $" << net << " calculated with a " << TAX_RATE * 100 << "% tax rate.\n\n";
	
	// Just a fun test for myself.
	/*if (gross > 0) {
		net = gross - (gross * TAX_RATE);
	
		cout << "\n\nYour gross pay is: $" + to_string(gross);
		cout << "\nYour net pay is: $" + to_string(net) + " calculated with a " + to_string(TAX_RATE) + "% tax rate.\n\n";
	}
	else {
		cout << "\nEither your hours worked is zero or your hourly wage is zero and could not be processed.\n\n";
	}*/

	// end process
	return 0;
}