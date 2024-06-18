/*
    Write a program that takes as input any change expressed in cents. It should then
    compute the number of half-dollars, quarters, dimes, nickels, and pennies to be
    returned, returning as many half-dollars as possible, then quarters, dimes, nickels,
    and pennies, in that order. For example, 483 cents should be returned as 9 half-dollars,
    1 quarter, 1 nickel, and 3 pennies.
*/

#include <iostream>

using namespace std;

const int HALF_DOLLAR = 50;
const int QUARTER = 25;
const int DIME = 10;
const int NICKLE = 5;

int main()
{
    int change;

    cout << "Enter a change: ";
    cin >> change;
    cout << endl;

    cout << "Your change is: " << change << endl;

    cout << "Half-dollar: " << change / HALF_DOLLAR << endl;
    change %= HALF_DOLLAR;

    cout << "Quarter is: " << change / QUARTER << endl;
    change %= QUARTER;

    cout << "Dime is: " << change / DIME << endl;
    change %= DIME;

    cout << "Nickel is: " << change / NICKLE << endl;
    change %= NICKLE;

    cout << "Pennies is: " << change;
    return 0;
}
