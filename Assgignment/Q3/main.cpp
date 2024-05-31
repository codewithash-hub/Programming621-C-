#include <iostream>

using namespace std;


double convertHeight(double height);
int convertWeight(int weight);
string JacketSize(double height, int weight);

int main()
{
    double height;
    int weight;


    cout << "Enter your height in meters: ";
    cin >> height;
    cout << "Enter your weight in kilograms: ";
    cin >> weight;


    double heightInFeet = convertHeight(height);
    int weightInPounds = convertWeight(weight);

    // Determine jacket size
    string jacket_size = JacketSize(heightInFeet, weightInPounds);

    // Display results
    cout << "\nYour height in feet: " << heightInFeet << endl;
    cout << "Your weight in pounds: " << weightInPounds << endl;
    cout << "Recommended jacket size: " << jacket_size << endl;
    return 0;
}


double convertHeight(double height)
{
    return height * 3.28084;
}

int convertWeight(int weight)
{
    return weight * 2.20462;
}

string JacketSize(double height, int weight)
{
    if (height >= 6.5 && weight >= 86 && weight <= 95) {
        return "Extra Large 2";
    } else if (height >= 6.3 && height < 6.5 && weight >= 75 && weight <= 85) {
        return "Extra Large";
    } else if (height >= 5.9 && height < 6.3 && weight >= 65 && weight <= 75) {
        return "Large";
    } else if (height >= 5.7 && height < 5.9 && weight >= 56 && weight <= 65) {
        return "Medium";
    } else if (height >= 5.2 && height < 5.7 && weight>= 50 && weight <= 55) {
        return "Small";
    } else {
        return "Size not available";
    }
}
