#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


using namespace std;


int main()
{
    vector<int> vec = {11, 22, 33, 44, 55, 66, 77, 88, 99, 111};
    int a[10] = {0, 11, 22, 33, 4, 5, 6, 7, 8, 9};

    // 1)
    cout << boolalpha;
    cout << equal(vec.begin(), vec.end(), a) << endl; 
    cout << equal(vec.begin(), vec.begin()+2, a+1, a+3) << endl;
    
    

    // 2)
    // auto pa = mismatch(vec.begin(), vec.end(), a+1);
    auto pa = mismatch(vec.begin(), vec.begin()+2, a+1, a+3);
    cout << pa.first-vec.begin() << endl;


    // 3)
    string str1 = "abcde";
    string str2 = "bbced";

    cout << lexicographical_compare(str1.begin(), str1.end(), 
                                    str2.begin(), str2.end()) << endl;
    // c++20
    auto result = lexicographical_compare_three_way(
        str1.begin(), str1.end(),
        str2.begin(), str2.end()
    );
    cout << (result < 0) << endl;
    cout << (result == 0) << endl;
    cout << (result > 0) << endl;

    return 0;
}