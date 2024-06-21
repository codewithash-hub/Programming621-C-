#include <iostream>
#include <string>

using namespace std;

class Employee
{
    public:
        double totalPay(int hoursWorked, double hourlyRate);
        Employee(string name, int age, int hoursWorked, double hourlyRate);
        void printInfo() const;

    private:
        string name;
        int age;
        int hoursWorked;
        double hourlyRate;
};

int main()
{
    Employee emp("Ash", 24, 47, 500);
    cout << endl;

    string empType = "full time";
    int tot = emp.totalPay(47, 500);
    if (empType == "full time")
        cout << tot * (500 * 2);
    else
        cout << emp.totalPay(47, 500);

    return 0;
}

double Employee::totalPay(int hrsWorked, double hrlyRate)
{
    return hrsWorked * hrlyRate;
}

Employee::Employee(string name, int age, int hoursWorked, double hourlyRate)
{
    name = name;
    age = age;
    hoursWorked = hoursWorked;
    hourlyRate = hourlyRate;

    cout << "Name is: " << name << endl << "Age: " << age << endl << "Hours worked: " << hoursWorked << endl
    << "Hourly rate: " << hourlyRate;
}

//void Employee::printInfo() const
//{
    //cout << "Name is: " << name << endl << "Age: " << age << endl << "Hours worked: " << hoursWorked << endl
    //<< "Hourly rate: " << hourlyRate;
//}
