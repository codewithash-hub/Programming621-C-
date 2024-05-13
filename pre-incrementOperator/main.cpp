#include <iostream>

using namespace std;

int main()
{
    int x = 5;
    int y = ++x;

    cout << "x is: " << x << endl;
    cout << "y is: " << y << endl;
    cout << endl;

    int a = 5;
    int b = 2 + (++a);

    cout << "a is: " << a << endl;
    cout << "b is: " << b << endl;
    return 0;
}
