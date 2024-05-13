#include <iostream>
#include <string>

using namespace std;

int main()
{

    string fname = "Elizabeth";
    string name = fname + " Jones";
    string str1 = "It's sunny";
    string str2 = "";
    string str3 = "computer science";
    string str4 = "C++ programming";
    string str5 = fname + " is taking " + str4;
    string::size_type len;

    cout << "str3: " << str3 << endl;
    str3.clear();
    cout << "Atfer clear, str3: " << str3 << endl;

    cout << "str1.empty(): " << str1.empty() << endl;
    cout << "str2.empty()" << str2.empty() << endl;

    cout << "str4: " << str4 << endl;
    str4.erase(11, 3);
    cout << "After erase(11, 3), str4: " << str4 << endl;

    cout << "Length of \"" << fname << "\" = " << fname.length() << endl;
    cout << "Length of \"" << name << "\" = " << static_cast<unsigned int>(name.length()) << endl;
    cout << "Length of \"" << str1 << "\" = " << static_cast<unsigned int>(str1.length()) << endl;
    cout << "size of \"" << str5 << "\" = " << static_cast<unsigned int>(str5.size()) << endl;

    len = name.length();
    cout << "len = " << static_cast<unsigned int>(len) << endl;
    cout << fname.length() << endl;
    cout << name.length() << endl;
    cout << str2.length() << endl;
    cout << str5.size() << endl;
    len = name.length();

    return 0;
}
