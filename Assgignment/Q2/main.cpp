#include <iostream>
#include <string>
#include <iomanip>
#include <vector>

using namespace std;

double full_period_mark(int test1, int test2, int assignment);
double final_mark(double period_mark, double exam);
string PassOrFail(double finalMark, double period_mark);

int main()
{
    int test1, test2, assignment, exam, no_of_students;
    string name, surname;

    struct Student {
        string firstName;
        string lastName;
        double fullPeriodMark;
        double finalMark;
        string passOrFail;
    };

    vector<Student> students;

    cout << "Enter the number of students you want: ";
    cin >> no_of_students;

    for (int i = 1; i <= no_of_students; i++) {
        cout << "Enter marks for the student number " << i << endl;
        cout << "Enter first name: ";
        cin >> name;
        cout << "Enter surname: ";
        cin >> surname;
        cout << "Enter test 1 mark: ";
        cin >> test1;
        cout << "Enter test 2 mark: ";
        cin >> test2;
        cout << "Enter assignment mark: ";
        cin >> assignment;
        cout << "Enter exam mark: ";
        cin >> exam;
        cout << endl;

        double fullPeriodMark = full_period_mark(test1, test2, assignment);
        double finalMark = final_mark(fullPeriodMark, exam);
        string passOrFail = PassOrFail(finalMark, fullPeriodMark);

        students.push_back({name, surname, fullPeriodMark, finalMark, passOrFail});
        }

        cout << "\nResults:\n";
        cout << left << setw(12) << "Name"
             << setw(12) << "Surname"
             << setw(18) << "Full Period Mark"
             << setw(12) << "Final Mark"
             << setw(12) << "Pass or Fail"
             << endl;
        cout << "---------------------------------------------------------------\n";

        for (const auto& student : students) {
            cout << left << setw(12) << student.firstName
                 << setw(12) << student.lastName
                 << setw(18) << student.fullPeriodMark
                 << setw(12) << student.finalMark
                 << setw(12) << student.passOrFail
                 << endl;
        }
    return 0;
}

double full_period_mark(int test1, int test2, int assignment)
{
    double period_mark = (test1 * 0.33) + (test2 * 0.33) + (assignment * 0.34);

    return period_mark;
}

double final_mark(double period_mark, double exam)
{
    return (period_mark * 0.4) + (exam * 0.6);
}

string PassOrFail(double finalMark, double period_mark)
{
    if (finalMark >= 50 && period_mark >= 40)
        return "PASS";
    else
        return "FAIL";
}
