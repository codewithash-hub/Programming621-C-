#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    double base, exponent, pow;

    base = 2;
    exponent = 3;

    int counter = 0;

    for (int i = 0; i < exponent; i++) {
        pow = base * exponent + i;
        pow++;
    }

    cout << pow << endl;

    return 0;
}

int absFunc(int number) {
    if (number < 0)
        number = -number;

    return number;
}

