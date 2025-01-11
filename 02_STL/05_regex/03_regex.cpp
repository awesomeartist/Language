#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    string str = "abc123def456ghi789jkl";
    regex re("\\d{3}");

    string str2 = regex_replace(str, re, "***");
    string str3 = regex_replace(str, re, "[$&]");

    cout << str2 << endl;
    cout << str3 << endl;

    return 0;
}