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
    vector<int> vec = {11, 22, 33, 44, 55, 66, 77, 88, 99, 111};


    // 1)
    cout << boolalpha;
    cout << any_of(vec.begin(), vec.end(), func) << endl;
    


    // 2)
    cout << all_of(next(vec.begin(), 5), vec.end(), func) << endl;
    

    // 3)
    cout << none_of(vec.begin(), next(vec.begin(), 3), func) << endl;


    // 4) 
    cout << count(vec.begin(), vec.end(), 55) << endl;

    
    // 5)
    cout << count_if(prev(vec.end(), 5), vec.end(), func);


    return 0;
}