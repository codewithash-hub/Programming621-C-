#include <iostream>

using namespace std;


double larger(double x, double y) {
    double max; // Local Variable.

    max = (x >= y) ? x : y;

    return max;
}

/*
    Let us now write another function that uses this function to determine
    the largest of three numbers.
*/

double compareThree(double x, double y, double z) {
    return larger(x, larger(y, z));
}

int main()
{
    cout << "The larger number is: " << larger(8, 6) << endl;
    cout << "The largest number is: " << compareThree(54, 98, 34) << endl;
    cout << "Hello world!" << endl;
    return 0;
}

