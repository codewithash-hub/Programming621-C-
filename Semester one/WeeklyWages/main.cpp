#include <iostream>

using namespace std;

int main()
{
    double wages, hours, rate;

    cout << "Enter hours and rate: ";
    cin >> hours >> rate;
    cout << endl;

    if (hours > 40.0)
        wages = 40.0 * rate + 1.5 * rate * (hours - 40.0);
    else
        wages = hours * rate;

    cout << "Your weekly wages is: R" << wages << endl;
    printf("Your weekly wages is: R%f", wages);
    return 0;
}
