#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;


void print(const int &n)
{
    cout << n << "\t";
}

int mul(int sum, int n)
{
    return sum * n;
}



int main()
{
    vector<int> vec1 = {2, 3, 1, 6, 5, 7, 9, 4, 8, 10};
    vector<int> vec2(10, 2);
    int a[10] = {0};

    iota(a, a+10, 1);
    cout << "a[10] : ";
    for_each(a, a+10, print);
    cout << endl;

    // 1) reduce
    int result = 0;
    // sum = reduce(a, a+10);
    // sum = reduce(a, a+10, 10);
    result = reduce(a, a+10, 1, mul);
    cout << "result : " << result << endl;

    // 2) transform reduce
    result = transform_reduce(vec1.begin(), vec1.end(), vec2.begin(), 0);
    cout << "result = " << result << endl;


    return 0;
}