#include <iostream>
#include <span>
#include <vector>
#include <list>

using namespace std;

void print(const span<int> sp);

int main()
{
    vector<int> vec = {1, 3, 4, 5};
    list<int> ls = {1, 3, 4, 5};
    int a[5] = {1, 2, 3, 4, 5};

    span sp(a); // c++20
    // span sp(ls); // error，要求容器底层内存连续
    cout << "sp[2] = " << sp[2] << endl;
    cout << sp.size() << endl;
    // for (auto it = sp.begin(); it != sp.end(); it++)
    // {
    //     cout << *it << endl;
    // }

    print(sp);
    cout << "ptr = " << (uintptr_t)sp.data() <<endl;


    return 0;
}

void print(const span<int> sp)
{
    for (auto it = sp.begin(); it != sp.end(); it++)
    {
        cout << *it << endl;
    }
    cout << endl;

    cout << "ptr = " << (uintptr_t)sp.data() <<endl;
}