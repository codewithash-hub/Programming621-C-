#include <iostream>
#include <string>

using namespace std;

int main()
{

    int dividend, divisor, quotient;

    cout << "Enter the divisor: ";
    cin >> dividend;

    cout << "Enter the divisor: ";
    cin >> divisor;
    cout << endl;

    quotient = dividend / divisor;
    cout << "Quotient = " << quotient << endl;

    int num = 5;

    string str = "Something is wrong!!!";

    throw 4;
    //throw x;
    throw str;
    throw string("Exception found!");



    return 0;
}
