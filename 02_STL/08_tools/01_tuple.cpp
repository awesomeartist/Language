#include <iostream>
#include <string>
#include <tuple>

using namespace std;

int main()
{
    // tuple<int, int, string> tp = {12, 100, "Tom"};
    tuple<int, int, string> tp = make_tuple(12, 100, "Tom");
    cout << get<0>(tp) << endl;
    // int a;
    // int b;
    // string str;
    // tie(a, b, str) = tp;
    // cout << a << endl;

    auto [a, b, str] = tp;
    cout << str << endl;

    return 0;
}