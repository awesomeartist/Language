#include <iostream>
#include <vector>
#include <random>
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

    cout << "vec : ";
    for_each(vec.begin(), vec.end(), print);
    cout << endl;


    // 1) copy
#if false

    vector<int> vec_c1(vec.size());
    auto c1_end = copy(vec.begin(), vec.end(), vec_c1.begin());
    cout << "vec_c1 : ";
    for_each(vec_c1.begin(), vec_c1.end(), print);
    cout << endl;

    vector<int> vec_c2(vec.size());
    auto c2_end = copy(vec.begin(), vec.begin()+5, vec_c2.begin());
    cout << "vec_c2 : ";
    for_each(vec_c2.begin(), c2_end, print);
    cout << endl;


    vector<int> vec_c3(vec.size(), 0);
    auto c3_end = copy_if(vec.begin(), vec.begin()+5, vec_c3.begin(), check);
    cout << "vec_c3 : ";
    for_each(vec_c3.begin(), c3_end, print);
    cout << endl;


    vector<int> vec_c4(vec.size());
    auto c4_begin = copy_backward(vec.begin(), vec.begin()+5, vec_c4.end());
    cout << "vec_c4 : ";
    for_each(vec_c4.begin(), vec_c4.end(), print);
    cout << endl;

#endif


    // 2) move
#if false

    // vector<int> vec_m1(vec.size());
    // auto m1_end = move(vec.begin(), vec.begin()+5, vec_m1.begin());
    // cout << "vec_m1 : ";
    // for_each(vec_m1.begin(), m1_end, print);
    // cout << "\nvec : ";
    // for_each(vec.begin(), vec.end(), print);

    vector<string> vec_str = {"A", "B", "C", "D", "E", "F"};
    string str[6];
    move(vec_str.begin(), vec_str.begin()+2, str);
    for (auto &&s : vec_str)
    {
        cout << s << "\t";
    }
    
#endif


    // 3) Random Sampling
#if false

    vector<int> vec_rs(vec.size());
    auto rs_end = sample(vec.begin(), vec.end(), vec_rs.begin(), 5, 
                        default_random_engine(random_device{}()));
    cout << "vec_rs : ";
    for_each(vec_rs.begin(), rs_end, print);

#endif


    // 4) swap
#if true

    iter_swap(vec.begin(), vec.end()-1);

    cout << "vec : ";
    for_each(vec.begin(), vec.end(), print);
    
    swap_ranges(vec.begin(), vec.begin()+3, vec.end()-3);

    cout << "\nvec : ";
    for_each(vec.begin(), vec.end(), print);
#endif

    return 0;
}

