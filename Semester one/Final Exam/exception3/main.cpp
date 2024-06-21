#include <iostream>
#include <string>

using namespace std;

int main()
{
    int divisor, dividend, quotient;
    string inpStr = "The input stream is in the fail state.";

    try
    {
        cout << "Enter the divisor: ";
        cin >> dividend;

        cout << "Enter the divisor: ";
        cin >> divisor;
        cout << endl;

        if (divisor == 0)
            throw 0;
        else if (divisor < 0)
            throw string("Negative divisor");
        else if (!cin)
            throw inpStr;

        quotient = dividend / divisor;

        cout << "Quotient = " << quotient << endl;
    }
    catch (int x)
    {
        cout << "Division by " << x << endl;
    }
    catch (string s)
    {
        cout << s << endl;
    }
    return 0;
}
