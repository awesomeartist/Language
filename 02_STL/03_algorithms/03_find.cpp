#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

bool func(const int &n)
{
    return n > 50;
}


int main()
{
    vector<int> vec = {11, 22, 33, 33, 33, 44, 55, 66, 77, 88, 99, 111};
    int a[10] = {0, 1, 22, 33, 44, 5, 6, 7, 8, 9};


    // 1)
    // auto it = find(vec.begin(), vec.end(), 55);


    // 2)
    // auto it = find_if(vec.begin(), vec.end(), func);


    // 3)
    // auto it = find_first_of(vec.begin(), vec.end(), a, a+9);


    // 4)
    // auto it = adjacent_find(vec.begin(), vec.end());

    // 5)
    // auto it = search_n(vec.begin(), vec.end(), 3, 33);


    // 6)
    auto it = search(vec.begin(), vec.end(), a+2, a+4);

    if (it == vec.end())
    {
        cout << "Value not found!" << endl;
    }



    cout << it - vec.begin() << " : " << *it << endl;
    cout << "vec.size() = " << vec.size() << endl;

    return 0;
}