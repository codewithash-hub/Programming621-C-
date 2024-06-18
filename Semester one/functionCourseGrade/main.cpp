#include <iostream>

using namespace std;

char courseGrade(int score) {
    switch (score / 10) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
        return 'F';
        break;
    case 6:
        return 'D';
        break;
    case 7:
        return 'C';
        break;
    case 8:
        return 'B';
        break;
    case 9:
    case 10:
        return 'A';
    }
}

int main()
{
    int score;
    cout << "Enter your score: ";
    cin >> score;

    cout << "The Grade is -> " <<courseGrade(score) << endl;
    cout << "Hello world!" << endl;
    return 0;
}
