#include <iostream>

using namespace std;

void printStars(int blanks, int starsInLine);

int main()
{
    int noOfLines;
    int counter;
    int noOfBlanks;

    cout << "Enter the number of star lines (1 to 20) " << "to be printed: ";
    cin >> noOfLines;

    while (noOfLines < 0 || noOfLines > 20)
    {
        cout << "Number of star lines should be " << "between 1 and 20" << endl;
        cout << "Enter the number of star lines " << "(1 to 20) to be printed: ";
        cin >> noOfLines;
    }

    cout << endl << endl;
    noOfBlanks = 30;

    for (counter = 1; counter <= noOfLines; counter++)
    {
        printStars(noOfBlanks, counter);
        noOfBlanks--;
    }
    return 0;
}

void printStars(int blanks, int starsInLine)
{
    for (int i = 1; i <= blanks; i++)
        cout << " ";

    for (int i = 1; i <= starsInLine; i++)
        cout << " *";

    cout << endl;
}
