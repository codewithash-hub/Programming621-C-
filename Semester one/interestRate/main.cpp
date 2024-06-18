#include <iostream>

using namespace std;

int main()
{
    double interestRate, balance, totalAmount;

    cout << "Enter the balance: ";
    cin >> balance;
    cout << endl;

    if (balance > 50000.00)
        interestRate = 0.07;
    else if(balance >= 25000.00)
        interestRate = 0.05;
    else if(balance >= 1000.00)
        interestRate = 0.03;
    else
        interestRate = 0.00;

    totalAmount = balance * interestRate;

    printf("The total amount is : %f", totalAmount);
    return 0;
}
