#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;



int main()
{
    vector<int> vec1 = {11, 22, 33, 33, 33, 44, 55, 66, 77, 88, 99, 111};
    vector<int> vec2 = {32, 44, 55, 66, 77, 88, 99};

    sort(vec1.begin(), vec1.end());
    for_each(vec1.begin(), vec1.end(), [](const int &n){cout << n << "\t";}); 
    cout << endl;

    // 1)
    cout << boolalpha << binary_search(vec1.begin(), vec1.end(), 22) << endl;

    // 2) 
    cout << *lower_bound(vec1.begin(), vec1.end(), 22) << endl;
    cout << *upper_bound(vec1.begin(), vec1.end(), 22) << endl;

    // 3)
    auto pa = equal_range(vec1.begin(), vec1.end(), 33);
    cout << *pa.first << endl;
    cout << *pa.second << endl;

    // 4)
    cout << boolalpha << includes(
        vec1.begin(), vec1.end(),
        vec2.begin(), vec2.end()
    );

    return 0;
}