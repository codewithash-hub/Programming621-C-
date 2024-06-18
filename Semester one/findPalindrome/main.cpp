#include <iostream>
#include <cmath>

using namespace std;

bool isNumPalindrome(int num);

int main()
{
    cout << "Is 5 a palindrome? " << isNumPalindrome(5) << endl;
    cout << "Is 44 a palindrome? " << isNumPalindrome(44) << endl;
    cout << "Is 434 a palindrome? " << isNumPalindrome(434) << endl;
    cout << "Is 78965987 a palindrome? " << isNumPalindrome(78965987) << endl;
    cout << "Is 78965 a palindrome? " << isNumPalindrome(78965) << endl;
    return 0;
}

bool isNumPalindrome(int num)
{
    int pwr = 0;
    if (num < 10)
        return true;
    else {
        while (num / (pow(10, pwr)) >= 10)
            pwr++;

        while (num >= 10) {
            int tenToPwr = (pow(10, pwr));
            if ((num / tenToPwr) != (num % 10))
                return false;
            else {
                num %= tenToPwr;
                num /= 10;
                pwr -= 2;
            }
            return true;
        }
    }
}
