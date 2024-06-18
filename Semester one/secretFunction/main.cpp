#include <iostream>

using namespace std;

int secret(int x) {
    if (x > 5)
        return 2 * x;

    return x;
}

int main()
{
    cout << secret(10) << endl;
    cout << "Hello world!" << endl;
    return 0;
}
