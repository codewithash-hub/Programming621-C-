#include <iostream>
#include <string>


using namespace std;

string isPrime(int num) {
    if (num <= 1) return "1 is NOT a prime number \n";

    for (int i = 2; i <= num; i++) {
        if (num % i == 0)
            return "Not prime\n";
        else
            return "Prime\n";
    }
}

int main()
{
    int num;

    cout << "Enter a number: ";
    cin >> num;

    cout << isPrime(num) << endl;
    cout << "Hello world!" << endl;

    for (int j = 1; j <= 20; j++) {
        if(isPrime(j))
        {
            printf("%d is a prime number.\n", j);
        } else {
            printf("%d is not a prime number.\n", j);
        }
    }
    return 0;
}
