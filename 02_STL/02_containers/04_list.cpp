#include <iostream>
#include <list>


using namespace std;


int main()
{
    // 1) forward_list 迭代器可进行单步的自增和自减

    list<int> ls = {1, 2, 4, 5, 7};
    list<int>::iterator it = ls.begin();
    
    cout << "forward list fs :" << endl;
    for (auto &i : ls)
    {
        cout << i << '\t';
    }
    cout << endl;
    cout << "*it = " << *it << endl;
    cout << "*(++it) = " << *(++it) << endl;
    cout << "*(--it) = " << *(--it) << endl;

    // output:
    // forward list fs :
    // 1       2       4       5       7
    // *it = 1
    // *(++it) = 2
    // *(--it) = 1


    return 0;
}