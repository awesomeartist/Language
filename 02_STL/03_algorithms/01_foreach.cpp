#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void func(const int &n)
{
    cout << n << "\t";
}


int main()
{
    vector<int> vec = {11, 22, 33, 44, 55, 66, 77, 88, 99, 111};
    int a[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};


    // 1)
    for_each(vec.begin(), vec.end(), func);
    cout << endl;


    // 2)
    for_each(vec.begin(), vec.end(), [](const int &n){cout << n << "\t";});
    cout << endl;

    // 3)
    auto fun = [](const int &n) {
        cout << n << "\t";
    };
    for_each(a, a+10, fun);


    return 0;
}