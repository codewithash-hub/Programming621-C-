#include <iostream>

using namespace std;

int main()
{
    int divisor, dividend, quotient;

    try
    {
        cout << "Enter the divisor: ";
        cin >> dividend;

        cout << "Enter the divisor: ";
        cin >> divisor;
        cout << endl;

        if (divisor == 0)
            throw 0;

        quotient = dividend / divisor;

        cout << "Quotient = " << quotient << endl;
    }
    catch (int)
    {
        cout << "Division by 0." << endl;
    }
    return 0;
}
