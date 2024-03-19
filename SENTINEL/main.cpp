#include <iostream>

using namespace std;

const int SENTINEL = -999;

int main()
{
    int number;
    int sum = 0;
    int counter = 0;

    cout << "Enter integers ending with " << SENTINEL << ": ";
    cin >> number;

    while(number != SENTINEL)
    {
        sum += number;
        counter++;
        cin >> number;
    }

    cout << "The sum of the " << counter << " numbers is " << sum << endl;

    if(counter != 0)
        cout << "The Average = " << sum / counter << endl;
    else
        cout << "No Input";

    return 0;
}
