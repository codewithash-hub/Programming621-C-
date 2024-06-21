#include <iostream>

using namespace std;

class clockType
{
    public:
        void setTime(int, int, int);
        void getTime(int&, int&, int&);
        void printTime() const;
        void incrementHours();
        void incrementMinutes();
        void incrementSeconds();
        bool equalTime(const clockType&) const;

    private:
        int hr;
        int min;
        int sec;
};

int main()
{
    clockType myClock;
    clockType yourClock;

    int hours, minutes, seconds;

    // set time for myClock class object
    myClock.setTime(5, 45, 30);

    // print myClock time
    cout << "myClock: ";
    myClock.printTime();
    cout << endl;

    // set time for yourClock
    yourClock.setTime(5, 46, 30);

    // print myClock time
    //cout << "yourClock: ";
    //yourClock.printTime();
    //cout << endl;

    cout << "Enter hours, minutes and seconds for yourClock: ";
    cin >> hours >> minutes >> seconds;

    // set new time for myClock
    yourClock.setTime(hours, minutes, seconds);

    // print yourClock time
    cout << "yourClock: ";
    yourClock.printTime();
    cout << endl;

    // compare time for myClock and yourClock
    if (myClock.equalTime(yourClock))
        cout << "Both times matches" << endl;
    else
        cout << "Both times do not match" << endl;

    // increment time for myClock by one second
    yourClock.incrementSeconds();
    cout << "yourClock after incremented by one second: ";
    yourClock.printTime();


    // compare time for myClock and yourClock
    if (myClock.equalTime(yourClock))
        cout << "Both times matches" << endl;
    else
        cout << "Both times do not match" << endl;

    return 0;
}

void clockType::setTime(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours < 24)
        hr = hours;
    else
        hr = 0;

    if (0 <= minutes && minutes < 60)
        min = minutes;
    else
        min = 0;

    if (0 <= seconds && seconds < 60)
        sec = seconds;
    else
        sec = 0;
}

void clockType::getTime(int& hours, int& minutes, int& seconds)
{
    hours = hr;
    minutes = min;
    seconds = sec;
}

void clockType::printTime() const
{
    if (hr < 10)
        cout << "0";
    cout << hr << ":";

    if (min < 10)
        cout << "0";
    cout << min << ":";

    if (sec < 10)
        cout << "0";
    cout << sec << endl;
}

void clockType::incrementHours()
{
    hr++;
    if (hr > 23)
        hr = 0;
}

void clockType::incrementMinutes()
{
    min++;
    if (min > 59)
    {
        min = 0;
        incrementHours();
    }
}

void clockType::incrementSeconds()
{
    sec++;
    if (sec > 59)
    {
        sec = 0;
        incrementMinutes();
    }
}

bool clockType::equalTime(const clockType& otherClock) const
{
    return (hr == otherClock.hr && min == otherClock.min && sec == otherClock.sec);
}
