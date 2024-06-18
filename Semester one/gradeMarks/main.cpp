#include <iostream>

using namespace std;

int main()
{
    int score;

    cout << "Enter your score mark: ";
    cin >> score;

    if (score >= 90)
        cout << "The grade is A." << endl;
    else if(score >= 80)
        cout << "Your score is B.\n";
    else if(score >= 70)
        cout << "The grade is C.\n";
    else if(score >= 60)
        cout << "The grade is D.\n";
    else
        cout << "The grade is F.";
    return 0;
}
