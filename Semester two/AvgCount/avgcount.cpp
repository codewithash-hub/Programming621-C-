#include <iostream>

using namespace std;

int main()
{
    int count, sum, num, average;

    cout << "Enter positive integers ending with -1" << endl; //Line 1

    count = 0; //Line 2
    sum = 0; //Line 3

    cin >> num; //Line 4

    while (num != -1) //Line 5
    {
            sum = sum + num; //Line 6
            count++; //Line 7
            cin >> num; //Line 8
    }

    cout << "The sum of the numbers is: " << sum << endl; //Line 9

    if (count != 0) //Line 10
            average = sum / count; //Line 11
    else //Line 12
            average = 0; //Line 13
            
    cout << "The average is: " << average << endl; //Line 14
}

