// WoodBTriangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Braden Wood
// 9/1/26
// Triangle V1: ask the user for the base and height of a triangle, calculate the area, and print it to the console.

#include <iostream>
#include <string>

using namespace std;

int main()
{
    // declare variables
    double base, height, area;

    // program title/description
    cout << "Triangle Area Program" << endl;
    cout << "Created by: Braden Wood" << endl;
    cout << "This program will ask the user for the base and height of a triangle, " << endl;
    cout << "then calculate and print the area of the triangle to the console." << endl;

    // collect user input
    cout << "Enter the base of the triangle: ";
    cin >> base;
    cout << "Enter the height of the triangle: ";
    cin >> height;

    // calculations
    area = .5 * (base * height);

    // output to console
    cout << endl << endl;
    cout << "The base of the triangle is: " << base << endl;
    cout << "The height of the triangle is: " << height << endl;
    cout << "The area of the triangle is: " << area << endl;

    cout << endl << endl;

    // end process
    return 0;
}