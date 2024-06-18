#include <iostream>

using namespace std;

void funcOne(int a, int& b, char v);
void funcTwo(int& x, int y, char& w);

int main()
{
    int num1, num2;
    char ch;

    num1 =10;
    num2 = 15;
    ch = 'A';

    cout << "Inside main: num1 = " << num1 << ", num2 = " << num2 << ", and ch = " << ch << endl;

    funcOne(num1, num2, ch);

    cout << "After funOne: num1 =" << num1 << ", num2 = " << num2 << ", and ch = " << ch << endl;

    funcTwo(num2, 25, ch);

    cout << "After funTwo: num1 =" << num1 << ", num2 = " << num2 << ", and ch = " << ch << endl;

    return 0;
}


void funcOne(int a, int& b, char v)
{
    int one;

    one = a;
    a++;
    b *= 2;
    v = 'B';

    cout << "Inside funOne: a = " << a << ", b = " << b << ", v = " << v << ", and one = " << one << endl;
}

void funcTwo(int& x, int y, char& w)
{
    x++;
    y *= 2;
    w = 'G';

    cout << "Inside funTwo: x = " << x << ", y = " << y << ", w = " << w << endl;

}



