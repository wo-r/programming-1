// BradenPractice.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Braden Wood
// 8/26/26
// Practice V1: ask the user for info and print to the console

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare variables
    string fName;
    string lName;
    char mInitial;
    int age;
    double gpa;
    string major;
    string classYear;
    int gradYear;
    double grade;

    // program title/description
    cout << "Practice Program\n";
    cout << "Created by: Braden Wood\n";
    cout << "This program will ask the user for their first and last name, middle inital, age, \n";
    cout << "major, and current gpa. We will print that info to the console.\n";

    // collect user input
    cout << "Enter your first name: ";
    cin >> fName;
    cout << "Enter your middle name (as a single character): ";
    cin >> mInitial;
    cout << "Enter your last name: ";
    cin >> lName;
    cout << "Enter your age (in years): ";
    cin >> age;
    cout << "Enter your current gpa (ex: 4.00): ";
    cin >> gpa;
    cin.ignore();
    cout << "Enter your class (freshmen, softmore, etc): ";
    getline(cin, classYear); // acts as cin, but allows for spaces
    cout << "Enter your year of graduation (2022, 2024, 21): ";
    cin >> gradYear;
    cout << "Enter your current grade (ex: 93.40): ";
    cin >> grade;
    cin.ignore();
    cout << "Enter your major: ";
    getline(cin, major);
    
    // output to console
    cout << "\n\n";
    cout << fName + " " << mInitial << ". " << lName << "\n";
    cout << "Your age is: " << age << "\n";
    cout << "Your major is: " << major << "\n";
    cout << "Your gpa is : " << gpa << "\n";
    cout << "Your class year is: " << classYear << "\n";
    cout << "Your graduation year is: " << gradYear;
    cout << ", and your grade is: " << grade;

    /*
    cout << "\n\n";
    cout << fName + " " + mInitial + ". " + lName + "\n";
    cout << "Your age is: " + to_string(age) + "\n"; // using to_string for integers (old habit)
    cout << "Your major is: " + major + "\n";
    cout << "Your gpa is : " + to_string(gpa) + "\n";
    cout << "Your class year is: " + classYear + "\n";
    cout << "Your graduation year is: " + to_string(gradYear);
    cout << ", and your grade is: " + to_string(grade);
    */

    cout << "\n\n";
   
    // end process
    return 0;
}
