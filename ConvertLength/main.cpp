/*
    Write a program that takes as input given lengths expressed in feet and inches. The
    program should then convert and output the lengths in centimeters. Assume that the
    given lengths in feet and inches are integers.
*/

#include <iostream>

using namespace std;

const double CENTIMETER_PER_INCH = 2.54;
const int INCHES_PPER_FOOT = 12;

int main()
{
    int feet;
    int inches;
    int totalInches;
    double centimeter;

    cout << "Enter you length(Feet and Inches): ";
    cin >> feet;
    cin >> inches;

    // get the total length from feet and inches
    totalInches = (INCHES_PPER_FOOT * feet) + inches;

    // convert to centimeters
    centimeter = totalInches * CENTIMETER_PER_INCH;

    cout << feet << "\"" << inches << "\'" << " is: " << centimeter << endl;


    return 0;
}
