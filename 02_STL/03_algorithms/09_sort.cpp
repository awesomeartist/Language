#include <iostream>
#include <vector>
#include <random>
#include <algorithm>

using namespace std;


void print(const int &n)
{
    cout << n << "\t";
}

int main()
{
    vector<int> vec = {71, 11, 32, 23, 44, 65, 23, 88, 99, 55};
    cout << "vec : ";
    for_each(vec.begin(), vec.end(), print);


    // 1) sort
#if false
    
    vector<int> vec_s1(vec.begin(), vec.end());
    sort(vec_s1.begin(), vec_s1.end());
    cout << "\nvec_s1 : ";
    for_each(vec_s1.begin(), vec_s1.end(), print);

    vector<int> vec_s2(vec.begin(), vec.end());
    stable_sort(vec_s2.begin(), vec_s2.end());
    cout << "\nvec_s2 : ";
    for_each(vec_s2.begin(), vec_s2.end(), print);


#endif



    // 2) partial sort
#if false

    vector<int> vec_s1(vec.begin(), vec.end());
    partial_sort(vec_s1.begin(), vec_s1.begin()+5, vec_s1.end());
    cout << "\nvec_s1 : ";
    for_each(vec_s1.begin(), vec_s1.end(), print);

    vector<int> vec_s2(vec.size());
    auto it_end = partial_sort_copy(vec.begin(), vec.end(), vec_s2.begin(), vec_s2.end()-6);
    cout << "\nvec_s2 : ";
    for_each(vec_s2.begin(), it_end, print);

    vector<int> vec_s3(vec.begin(), vec.end());
    nth_element(vec_s3.begin(), vec_s3.begin()+5, vec_s3.end());
    cout << "\nvec_s3 : ";
    for_each(vec_s3.begin(), vec_s3.end(), print);
    


#endif


    // 3) is_sorted 
#if false

    vector<int> vec_s1(vec.begin(), vec.end());
    sort(vec_s1.begin(), vec_s1.end());
    cout << "\nvec_s1 : ";
    for_each(vec_s1.begin(), vec_s1.end(), print);
    cout << boolalpha
    << "\nvec_s1 is sorted : " << is_sorted(vec_s1.begin(), vec_s1.end()) << endl;
    

    
    vector<int> vec_s2(vec.begin(), vec.end());
    partial_sort(vec_s2.begin(), vec_s2.begin()+5, vec_s2.end());
    cout << "vec_s2 : ";
    for_each(vec_s1.begin(), vec_s1.end(), print);
    auto it = is_sorted_until(vec_s2.begin(), vec_s2.end());
    cout << "\nvec_s2 is sorted until : " << *it << endl;
    
#endif


    // 4) partitioning
#if true 

    
#endif

    return 0;
}