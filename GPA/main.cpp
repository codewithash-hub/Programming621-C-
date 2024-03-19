#include <iostream>

using namespace std;

int main()
{
    char grade;

    cout << "Enter your grade letter: ";
    cin >> grade;

    switch (grade)
    {
    case 'A':
        cout << "The GPA is 4.0";
        break;
    case 'B':
        cout << "The GPA is 3.0";
        break;
    case 'C':
        cout << "The GPA is 2.0";
        break;
    case 'D':
        cout << "The GPA is 1.0";
        break;
    case 'F':
        cout << "The GPA is 0.0";
        break;
    default:
        cout << "The GPA is invalid";
    }

    return 0;
}
