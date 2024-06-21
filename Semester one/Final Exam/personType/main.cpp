#include <iostream>

using namespace std;


class personType
{
    public:
        void print() const;
        void setName(string first, string last);
        string getFirstName() const;
        string getLastName() const;
        personType(string first = "", string last = "");

    private:
        string firstName;
        string lastName;
};

int main()
{
    personType myPerson;

    myPerson.setName("Ash", "Munyai");

    myPerson.print();

    myPerson.getFirstName();
    myPerson.getLastName();


    personType myPers("Ash", "Munyai");

    return 0;
}

void personType::print() const
{
    cout << firstName << " " << lastName;
}

void personType::setName(string first, string last)
{
    first = firstName;
    last = lastName;
}

string personType::getFirstName() const
{
    return firstName;
}

string personType::getLastName() const
{
    return lastName;
}

// constructor
personType::personType(string first, string last)
{
    firstName = first;
    lastName = last;
}

























