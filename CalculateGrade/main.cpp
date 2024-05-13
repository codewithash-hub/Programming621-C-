#include <iostream>

using namespace std;

void getScore(int& score);
void printGrade(int score);

int main()
{
    int courseScore;
    cout << "Based on the course score, this program computes the course grade." << endl;

    getScore(courseScore);
    printGrade(courseScore);

    return 0;
}

void getScore(int& score)
{
    cout << "Enter course score: ";
    cin >> score;
    cout << "Course score is: " << score << endl;
}

void printGrade(int cScore)
{
    if (cScore >= 90)
        cout << "A." << endl;
    else if (cScore >= 80)
        cout << "B." << endl;
    else if(cScore >= 70)
        cout << "C." << endl;
    else if (cScore >= 60)
        cout << "D." << endl;
    else
        cout << "F." << endl;
}

