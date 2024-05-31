#include <iostream>
#include <iomanip>
#include <string>
#include <vector>

using namespace std;

struct Student {
    string firstName;
    string lastName;
    double test1;
    double test2;
    double assignment;
    double exam;
    double fullPeriodMark;
    double finalMark;
    string passOrFail;
};

// Function to compute the Full Period Mark
double computeFullPeriodMark(double test1, double test2, double assignment) {
    return (test1 * 0.33) + (test2 * 0.33) + (assignment * 0.34);
}

// Function to compute the Final Mark
double computeFinalMark(double fullPeriodMark, double exam) {
    return (fullPeriodMark * 0.4) + (exam * 0.6);
}

// Function to determine if a student has passed or failed
string determinePassOrFail(double fullPeriodMark, double finalMark) {
    if (fullPeriodMark >= 40 && finalMark >= 50) {
        return "PASS";
    } else {
        return "FAIL";
    }
}

int main() {
    vector<Student> students;
    int numStudents;

    cout << "Enter the number of students: ";
    cin >> numStudents;

    for (int i = 0; i < numStudents; ++i) {
        Student student;

        cout << "Enter first name: ";
        cin >> student.firstName;
        cout << "Enter last name: ";
        cin >> student.lastName;
        cout << "Enter marks for Test 1: ";
        cin >> student.test1;
        cout << "Enter marks for Test 2: ";
        cin >> student.test2;
        cout << "Enter marks for Assignment: ";
        cin >> student.assignment;
        cout << "Enter marks for Exam: ";
        cin >> student.exam;

        student.fullPeriodMark = computeFullPeriodMark(student.test1, student.test2, student.assignment);
        student.finalMark = computeFinalMark(student.fullPeriodMark, student.exam);
        student.passOrFail = determinePassOrFail(student.fullPeriodMark, student.finalMark);

        students.push_back(student);
    }

    cout << "\nResults:\n";
    cout << "Name Surname Full Period Mark Final Mark Pass or Fail\n";
    cout << "-----------------------------------------------------\n";

    for (const auto &student : students) {
        cout << setw(10) << left << student.firstName
             << setw(10) << left << student.lastName
             << setw(15) << left << student.fullPeriodMark
             << setw(10) << left << student.finalMark
             << setw(10) << left << student.passOrFail
             << endl;
    }

    return 0;
}
