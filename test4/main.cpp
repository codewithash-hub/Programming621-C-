#include <iostream>

using namespace std;


double calculateAverage(int test1, int test2);
string gradeAverage(double average);
void printDetails(string name, string surname, int test1, int test2, double average, string grade);

int main()
{
    int test1, test2;
    string name, surname;
    cout << "Enter test marks: ";
    cin >> test1 >> test2;
    cout << "Enter name and surname: ";
    cin >> name, surname;

    cout << "The average mark is: " << calculateAverage(test1, test2) << endl;
    cout << "You're " << gradeAverage(calculateAverage(test1, test2)) << endl;
    double average = calculateAverage(test1, test2);
    string grade = gradeAverage(average);
    // cout << printDetails(name, surname, test1, test2, average, grade) << endl;

    return 0;
}


double calculateAverage(int test1, int test2)
{
    return (test1 + test2) / 2;
}

string gradeAverage(double average)
{
    if(average >= 50)
        return "Passed";
    else
        return "False";
}

void printDetails(string name, string surname, int test1, int test2, double average, string grade)
{
    cout << name << " " << surname << " " << test1 << test2 << " " << average << " " << grade;
}
