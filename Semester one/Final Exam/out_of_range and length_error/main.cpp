#include <iostream>
#include <string>

using namespace std;

int main()
{
    string sentence;
    string str1, str2, str3;

    try
    {
        sentence = "Testing string exceptions!";
        cout << "Sentence = " << sentence << endl;

        cout << "sentence.length() = " << static_cast<int>(sentence.length()) << endl;

        str1 = sentence.substr(8, 20);
        cout << "str1 = " << str1 << endl;

        str2 = sentence.substr(28, 10);
        cout << "str2 = " << str2 << endl;

        str3 = "Exception handling. " + sentence;
        cout << "str3 = " << str3 << endl;
    }
    catch (out_of_range re)
    {
        cout << "In the out-of-range catch block: " << re.what() << endl;
    }
    catch (length_error le)
    {
        cout << "In the length-error catch block: " << le.what() << endl;
    }

    return 0;
}
