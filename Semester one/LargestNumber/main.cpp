#include <iostream>

using namespace std;

double larger(double x, double y);

int main()
{
    double num;
    double maxi;

    cout << "Enter 10 numbers: ";
    cin >> num;
    maxi = num;

    for (int i = 1; i < 10; i++)
    {
        cin >> num;
        maxi = larger(maxi, num);
    }

    cout << "The largest number is " << maxi << endl;

    return 0;
}

double larger(double x, double y)
{
    if (x >= y)
        return x;
    else
        return y;
}
