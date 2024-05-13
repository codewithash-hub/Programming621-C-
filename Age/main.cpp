#include <iostream>

using namespace std;

int main()
{
    int age;

    cout << "Enter your age: ";
    cin >> age;

    switch (age >= 18)
    {
    case 1:
        cout << "Old enough to be drafted." << endl;
        cout << "Old enough to vote." << endl;
        break;
    case 0:
        cout << "Not old enough to be drafted." << endl;
        cout << "Not old enough to vote." << endl;
    }
    return 0;
}
