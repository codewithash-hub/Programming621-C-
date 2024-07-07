#include <iostream>

using namespace std;

int main()
{
    int num1, num2, max;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (num1 > num2)
        max = num1;
    else if (num1 == num2)
        cerr << "Numbers are equal" << endl;
    else
        max = num2;

    cout << "The maximum number is: " << max << endl;

    return 0;
}