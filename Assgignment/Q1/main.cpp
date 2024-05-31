#include <iostream>

using namespace std;

int main()
{
    int account_number;
    cout << "Enter the account number: ";
    cin >> account_number;

    char service_code;
    cout << "Enter service code: ";
    cin >> service_code;


    int number_of_minutes;
    double amountDue = 0;

    int FRIST_FIFTY_MINS = 50;
    int FRIST_SEVENTY_MINS = 75;
    int FRIST_HUNDRED_MINS = 100;

    if (service_code == 'R' || service_code == 'r') {

        cout << "Enter number of minutes: ";
        cin >> number_of_minutes;
        // Determine regular service
        if (number_of_minutes > 50)
            amountDue = 100 + (number_of_minutes * 2) - FRIST_FIFTY_MINS;
        else
            amountDue = 100;

        cout << "\nAccount Number: " << account_number << endl;
        cout << "Service Type: Regular" << endl;
        cout << "Minutes Used: " << number_of_minutes << endl;
        cout << "Amount Due: R" << amountDue << endl;

    }else if (service_code == 'P' || service_code == 'p') {

        int day, night;

        cout << "Enter the number of minutes used between 6:00 a.m. to 6:00 p.m.: ";
        cin >> day;
        cout << "Enter the number of minutes used between 6:00 p.m. to 6:00 a.m.: ";
        cin >> night;

        // Determine the Premium service
        if (day > FRIST_SEVENTY_MINS)
            amountDue = (250 + number_of_minutes * 1) - FRIST_SEVENTY_MINS;
        else if (night > FRIST_HUNDRED_MINS)
            amountDue = (250 + number_of_minutes * 0.5) - FRIST_HUNDRED_MINS;

        cout << "Account Number: " << account_number << endl;
        cout << "Service Type: Premium" << endl;
        cout << "Day Minutes Used: " << day << endl;
        cout << "Night Minutes Used: " << night << endl;
        cout << "Amount Due: R" << amountDue << endl;
    }else {
        cout << "Invalid service code entered." << endl;
    }
    return 0;
}
