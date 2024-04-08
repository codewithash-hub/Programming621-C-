#include <iostream>

using namespace std;

int main()
{
    char gender;
    double policyRate;
    int age;

    cout << "Enter your GENDER and AGE: ";
    cin >> gender >> age;

    if(gender == 'M')
        if(age < 21)
            //policyRate = 0.05;
            cout << "Male less than 21\n";
        else
            //policyRate = 0.035;
            cout << "Male more than 21\n";
    else if(gender == 'F')
        if(age < 21)
            //policyRate = 0.04;
            cout << "Female less than 21\n";
        else
            //policyRate = 0.03;
            cout << "Female more than 21\n";

    return 0;
}
