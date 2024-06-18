#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int diceRoll(int num);

int main()
{
    cout << "Number of time dice was rolled to get 10 is " << diceRoll(10) << endl;
    cout << "Number of time dice was rolled to get 6 is " << diceRoll(6) << endl;
    return 0;
}

int diceRoll(int num)
{
    srand(time(0));

    int die1;
    int die2;
    int sum;
    int rollCount = 0;

    do
    {
        die1 = rand() % 6 + 1;
        die2 = rand() % 6 + 1;
        sum = die1 + die2;
        rollCount++;
    }
    while (sum != num);

    return rollCount;
}
