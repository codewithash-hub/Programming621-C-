#include <iostream>
#include <iomanip>  // for std::setprecision

using namespace std;

int main() {
    int accountNumber;
    char serviceCode;
    int minutes;
    double amountDue = 0.0;

    cout << "Enter account number: ";
    cin >> accountNumber;

    cout << "Enter service code (r or R for regular, p or P for premium): ";
    cin >> serviceCode;

    if (serviceCode == 'r' || serviceCode == 'R') {
        cout << "Enter the number of minutes used: ";
        cin >> minutes;

        // Regular Service Billing
        if (minutes <= 50) {
            amountDue = 100;  // fixed charge
        } else {
            amountDue = 100 + (minutes - 50) * 2;  // fixed charge + extra minutes charge
        }

        cout << fixed << setprecision(2);  // Set precision for monetary output
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Service Type: Regular" << endl;
        cout << "Minutes Used: " << minutes << endl;
        cout << "Amount Due: R" << amountDue << endl;

    } else if (serviceCode == 'p' || serviceCode == 'P') {
        int dayMinutes, nightMinutes;

        cout << "Enter the number of minutes used during the day (6:00 a.m. to 6:00 p.m.): ";
        cin >> dayMinutes;
        cout << "Enter the number of minutes used during the night (6:00 p.m. to 6:00 a.m.): ";
        cin >> nightMinutes;

        // Premium Service Billing
        amountDue = 250;  // base charge

        if (dayMinutes > 75) {
            amountDue += (dayMinutes - 75) * 1;  // charge for extra day minutes
        }
        if (nightMinutes > 100) {
            amountDue += (nightMinutes - 100) * 0.5;  // charge for extra night minutes
        }

        cout << fixed << setprecision(2);  // Set precision for monetary output
        cout << "\nAccount Number: " << accountNumber << endl;
        cout << "Service Type: Premium" << endl;
        cout << "Day Minutes Used: " << dayMinutes << endl;
        cout << "Night Minutes Used: " << nightMinutes << endl;
        cout << "Amount Due: R" << amountDue << endl;

    } else {
        cout << "Error: Invalid service code entered." << endl;
    }

    return 0;
}
