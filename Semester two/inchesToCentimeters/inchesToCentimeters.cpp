#include <iostream>

using namespace std;

double inchesToCentimeters(double inches);

int main()
{

    double i = 20;
    cerr << inchesToCentimeters(i) << endl;

    return 0;
}

double inchesToCentimeters(double inches)
{
    if (inches < 0)
    {
        cerr << "The given measurements must be nonnegative." << endl;
        return -1.0;
    }
    else
        return 2.54 * inches;
}