#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
    // ^((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$
    // ^[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Zz-z]{2,}$

    regex re("^((25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)\\.){3}(25[0-5]|2[0-4][0-9]|[01]?[0-9][0-9]?)$");
    string str = "192.168.0.1111";

    cout << boolalpha << regex_match(str, re) << endl;

    return 0;
}