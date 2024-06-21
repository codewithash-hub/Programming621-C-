#include <iostream>
#include <string>

using namespace std;

bool isPrime(int num) {
    if (num <= 1) {
        return false; // 1 is not a prime number
    }

    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return false; // Found a divisor, not a prime number
        }
    }

    return true; // No divisors other than 1 and itself, prime number
}

int main() {
    int num;

    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }

    for (int j = 1; j <= 20; j++) {
        if (isPrime(j)) {
            cout << j << " is a prime number." << endl;
        } else {
            cout << j << " is not a prime number." << endl;
        }
    }

    return 0;
}
