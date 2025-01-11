#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main()
{
   string str = "abc123def456ghi789jkl";
   regex re("(\\d)(\\d\\d)");
   smatch sm;
   if (regex_search(str, sm, re))
   {
        cout << sm.str() << endl;
        cout << sm.size() << endl;
        cout << sm[0] << endl;
        cout << sm[2] << endl;
        cout << sm.prefix() << endl;
        cout << sm.suffix() << endl;
        cout << sm.position() << endl;
   }
   else
   {
        cout << "can not match!" << endl;
   }

    while (regex_search(str, sm, re))
    {
        cout << sm.str() << "\t";
        str = sm.suffix();
    }
    return 0;
}