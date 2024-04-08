#include <iostream>

using namespace std;

int main()
{
    int number, temp;
    cout << "Enter an integer: ";
    cin >> number;
    cout << endl;

    temp = number;

    if (number < 0)
        number = -number;


    cout << "The absolute value of " << temp << " is " << number << endl;

    return 0;
}
