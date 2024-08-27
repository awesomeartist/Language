#include <iostream>
#include <vector>
#include <forward_list>
#include <algorithm>

using namespace std;

void print(const int &n)
{
    cout << n << "\t";
}

bool check(const int &n)
{
    return n < 70;
}


int main()
{
    vector<int> vec = {11, 21, 42, 22, 42, 56, 88, 86, 85, 99};
    forward_list<int> fs(vec.begin(), vec.end());

    cout << "vec : ";
    for_each(vec.begin(), vec.end(), print);
    cout << endl;

    cout << "fs : ";
    for_each(fs.begin(), fs.end(), print);
    cout << endl;

#if false

    cout << "min = " << min({11, 21, 42, 22, 42, 56, 88, 86, 85, 99}) << endl;
    
    cout << "max = " << *max_element(vec.begin(), vec.end()) << endl;

    auto it = minmax_element(vec.begin(), vec.end());
    cout << "min = " << *it.first << endl;
    cout << "max = " << *it.second << endl;

#endif


#if true

    cout << boolalpha;
    cout << is_sorted(vec.begin(), vec.end()) << endl;
    sort(vec.begin(), vec.end());
    cout << is_sorted(vec.begin(), vec.end()) << endl;

    // 第一部分满足 check
    cout << is_partitioned(vec.begin(), vec.end(), check) << endl;

    cout << (is_sorted_until(vec.begin(), vec.end()) == vec.end()) << endl;

    cout << is_permutation(vec.begin(), vec.end(), fs.begin(), fs.end());
    
#endif


    return 0;
}

