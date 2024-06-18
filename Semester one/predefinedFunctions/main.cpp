<<<<<<< HEAD
#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int main()
{
    int x;
    double u, v, abs_x;

    cout << "Uppercase of a is " << static_cast<char>(toupper('a')) << endl;

    u = 3.0;
    v = 4.0;

    cout << u << " to the power of " << v << " " << pow(u, v) << endl;

    u += pow(3.0, 3);

    cout << "u = " << u << endl;

    x = -15;
    abs_x = abs(x);
    printf("The absolute value for %d is %f", x, abs_x );
    return 0;
}
=======
#include <iostream>
#include <cmath>
#include <cctype>

using namespace std;

int main()
{
    int x;
    double u, v, abs_x;

    cout << "Uppercase of a is " << static_cast<char>(toupper('a')) << endl;

    u = 3.0;
    v = 4.0;

    cout << u << " to the power of " << v << " " << pow(u, v) << endl;

    u += pow(3.0, 3);

    cout << "u = " << u << endl;

    x = -15;
    abs_x = abs(x);
    printf("The absolute value for %d is %f", x, abs_x );
    return 0;
}
>>>>>>> cc9c6f04f4603c4db8a7ea8fc472c3e60e22da89
