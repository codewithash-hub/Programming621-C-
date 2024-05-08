#include <iostream>

using namespace std;

int main()
{

    // Get the selling price of the item.
    double salePrice;
    cout << "Enter the sales price: ";
    cin >> salePrice;

    double stateSalesTax;
    double citySalesTax;
    double luxuryTax;
    double salesTax;

    // Find the state’s portion of the sales tax using the formula:
    stateSalesTax = salePrice * 0.04;

    // Find the city’s portion of the sales tax using the formula:
    citySalesTax = salePrice * 0.015;

    // Find the luxury tax using the following formula:
    if (salePrice >= 50000)
        luxuryTax = salePrice * 0.1;
    else
        luxuryTax = 0;

    // Find salesTax using the formula:
    salesTax = stateSalesTax + citySalesTax + luxuryTax;

    // Find amountDue using the formula:
    double amountDue;

    amountDue = salePrice + salesTax;

    cout << "Your amount due is: " << amountDue << endl;


    return 0;
}

