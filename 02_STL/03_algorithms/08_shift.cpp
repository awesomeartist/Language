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
    vector<int> vec = {21, 11, 32, 23, 44, 65, 73, 88, 99, 55};
    sort(vec.begin(), vec.end());
    cout << "vec : ";
    for_each(vec.begin(), vec.end(), print);


    // 1) reverse
#if false

    vector<int> vec_re1(vec.begin(), vec.end());
    reverse(vec_re1.begin(), vec_re1.end());
    cout << "\nvec_re1 : ";
    for_each(vec_re1.begin(), vec_re1.end(), print);

    vector<int> vec_re2(vec.size());
    reverse_copy(vec.begin(), vec.end(), vec_re2.begin());
    cout << "\nvec_re2 : ";
    for_each(vec_re2.begin(), vec_re2.end(), print);

#endif


    // 2) rotate
#if false

    vector<int> vec_ro1(vec.begin(), vec.end());
    rotate(vec_ro1.begin(), vec_ro1.begin()+3, vec_ro1.end());
    cout << "\nvec_ro1 : ";
    for_each(vec_ro1.begin(), vec_ro1.end(), print);

    vector<int> vec_ro2(vec.size());
    rotate_copy(vec.begin(), vec.begin()+3, vec.end(), vec_ro2.begin());
    cout << "\nvec_ro2 : ";
    for_each(vec_ro2.begin(), vec_ro2.end(), print);

#endif


    // 3) shift
    // c++20
#if true

    vector<int> vec_sl(vec.begin(), vec.end());
    auto it_end = shift_left(vec_sl.begin(), vec_sl.end(), 3);
    cout << "\nvec_sl : ";
    for_each(vec_sl.begin(), it_end, print);

    vector<int> vec_sr(vec.begin(), vec.end());
    auto it_begin = shift_right(vec_sr.begin(), vec_sr.end(), 3);
    cout << "\nvec_sr : ";
    for_each(it_begin, vec_sr.end(), print);

    vector<int> vec_ra(vec.begin(), vec.end());
    shuffle(vec_ra.begin(), vec_ra.end(), default_random_engine(random_device{}()));
    cout << "\nvec_ra : ";
    for_each(vec_ra.begin(), vec_ra.end(), print);

#endif


    return 0;
}