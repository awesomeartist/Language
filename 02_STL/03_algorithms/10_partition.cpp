#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;


bool check(const int &n)
{
    return n%2 == 0;
}

void print(const int &n)
{
    cout << n << "\t";
}

int main()
{
    vector<int> vec = {71, 11, 32, 23, 44, 65, 23, 88, 99, 55};
    cout << "vec : ";
    for_each(vec.begin(), vec.end(), print);


    // 1) partition
    vector<int> vec_p1(vec.begin(), vec.end());
    partition(vec_p1.begin(), vec_p1.end(), check);
    cout << "\nvec_p1 : ";
    for_each(vec_p1.begin(), vec_p1.end(), print);

    vector<int> vec_p2(vec.begin(), vec.end());
    vector<int> vec_p21(vec.size());
    vector<int> vec_p22(vec.size());
    auto pa = partition_copy(vec_p2.begin(), vec_p2.end(), 
                             vec_p21.begin(), vec_p22.begin(), check);
    cout << "\nvec_p21 : ";
    for_each(vec_p21.begin(), pa.first, print);
    cout << "\nvec_p22 : ";
    for_each(vec_p22.begin(), pa.second, print);
    
    vector<int> vec_p3(vec.begin(), vec.end());
    stable_partition(vec_p3.begin(), vec_p3.end(), check);
    cout << "\nvec_p3 : ";
    for_each(vec_p3.begin(), vec_p3.end(), print);


    // 2)
    cout << boolalpha 
    << "\nvec_p1 is partition : " << is_partitioned(vec_p1.begin(), vec_p1.end(), check);
    auto it = partition_point(vec_p1.begin(), vec_p1.end(), check);
    cout << "\npartition point of vec_p1 : " << *it << endl;

    

    return 0;
}