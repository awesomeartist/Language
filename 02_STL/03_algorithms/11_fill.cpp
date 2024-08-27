#include <iostream>
#include <vector>
#include <forward_list>
#include <random>
#include <algorithm>

using namespace std;


int func1(void)
{
    static int n = 0;
    return (2*n++)+1;
}

bool func2(const int &n)
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


    // 1) fill
#if false

    vector<int> vec1(vec.begin(), vec.end());
    vector<int> vec2(vec.begin(), vec.end());
    
    fill(vec1.begin(), vec1.end()-5, 5);
    cout << "\nvec1 : ";
    for_each(vec1.begin(), vec1.end(), print);

    fill_n(vec2.begin()+5, 5, 3);
    cout << "\nvec2 : ";
    for_each(vec2.begin(), vec2.end(), print);

#endif


    // 2) generate
#if false

    vector<int> vec1(vec.size());
    vector<int> vec2(vec.size());
    
    generate(vec1.begin(), vec1.end()-5, func1);
    cout << "\nvec1 : ";
    for_each(vec1.begin(), vec1.end(), print);

    auto it_end = generate_n(vec2.begin()+5, 5, func1);
    cout << "\nvec2 : ";
    for_each(vec2.begin(), it_end, print);


#endif


    // 3) transform
#if false


    vector<int> vec1(vec.begin(), vec.end());
    vector<int> vec2(vec.begin(), vec.end());
    
    transform(vec.begin(), vec.end()-5, vec1.begin(), [](const int &n){return (n+50)%100;});
    cout << "\nvec1 : ";
    for_each(vec1.begin(), vec1.end(), print);

    transform(vec.begin(), vec.begin()+5, vec1.begin(), vec2.begin(), 
            [](const int &n1, const int &n2){return (n1+n2)%100;});
    cout << "\nvec2 : ";
    for_each(vec2.begin(), vec2.end(), print);

#endif


    // 4) replace
#if false

    vector<int> vec1(vec.begin(), vec.end());
    vector<int> vec2(vec.begin(), vec.end());
    vector<int> vec3(vec.begin(), vec.end());
    vector<int> vec4(vec.begin(), vec.end());

    replace(vec1.begin(), vec1.end(), *(vec.begin()+5), 0);
    cout << "\nvec1 : ";
    for_each(vec1.begin(), vec1.end(), print);

    replace_if(vec2.begin(), vec2.end(), func2, 0);
    cout << "\nvec2 : ";
    for_each(vec2.begin(), vec2.end(), print);
    
    replace_copy(vec.begin(), vec.end(), vec3.begin(), 44, 0);
    cout << "\nvec3 : ";
    for_each(vec3.begin(), vec3.end(), print);
    // cout << "\nvec : ";
    // for_each(vec.begin(), vec.end(), print);

    replace_copy_if(vec.begin(), vec.end(), vec4.begin(), func2, 0);
    cout << "\nvec4 : ";
    for_each(vec4.begin(), vec4.end(), print);

#endif


    // 5) removing
#if false
    vector<int> vec1(vec.begin(), vec.end());
    vector<int> vec2(vec.begin(), vec.end());
    vector<int> vec3(vec.begin(), vec.end());
    vector<int> vec4(vec.begin(), vec.end());

    auto it_end1 = remove(vec1.begin(), vec1.end(), 44);
    cout << "\nvec1 : ";
    for_each(vec1.begin(), it_end1, print);

    auto it_end2 = remove_if(vec2.begin(), vec2.end(), func2);
    cout << "\nvec2 : ";
    for_each(vec2.begin(), it_end2, print);
    
    auto it_end3 = remove_copy(vec.begin(), vec.end(), vec3.begin(), 44);
    cout << "\nvec3 : ";
    for_each(vec3.begin(), it_end3, print);

    auto it_end4 = remove_copy_if(vec.begin(), vec.end(), vec4.begin(), func2);
    cout << "\nvec4 : ";
    for_each(vec4.begin(), it_end4, print);

#endif

    
    // 5) erase
#if false

    vector<int> vec1(vec.begin(), vec.end());
    vector<int> vec2(vec.begin(), vec.end());

    erase(vec1, 11);
    cout << "\nvec1 : ";
    for_each(vec1.begin(), vec1.end(), print);

    erase_if(vec2, func2);
    cout << "\nvec2 : ";
    for_each(vec2.begin(), vec2.end(), print);


#endif


    // 5) unique
#if true

    vector<int> vec1 = {11, 11, 24, 55, 66, 75, 88, 88, 88, 90};
    vector<int> vec2 = {11, 11, 24, 55, 66, 75, 88, 88, 88, 90};
    vector<int> vec3(vec2.size());


    auto it_end1 = unique(vec1.begin(), vec1.end());
    cout << "\nvec1 : ";
    for_each(vec1.begin(), it_end1, print);

    auto it_end2 = unique_copy(vec2.begin(), vec2.end(), vec3.begin());
    cout << "\nvec3 : ";
    for_each(vec3.begin(), it_end2, print);


#endif

    return 0;
}