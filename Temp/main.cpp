#include <iostream>

using namespace std;

int main()
{
    double temperature;

    cout << "Enter the temperature: ";
    cin >> temperature;

    if(temperature >= 50)
    {
        if(temperature >= 80)
        {
            cout << "Good day for swimming!\n";
        } else
        {
            cout << "Good day for golfing.\n";
        }

    } else
    {
        cout << "Good day to play Tennis.\n";
    }

    return 0;
}
