#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;


int main()
{
    // 迭代器：为容器类提供统一的遍历接口，不用管容器底层内存管理方式
/*
    1) 数组访问，可以访问与修改
*/   
#if false

    string str_ref = "Hello World!";

    for (auto &c : str_ref) {
        cout << c << " ";
    }

    // output: 
    // H e l l o   W o r l d ! 

#endif


/* 
    2) iterator begin() 
    返回指向起始的迭代器
*/
#if true

    string str_ref("Hello World!");
    string str_res(str_ref);
    string::iterator it = str_res.begin();
    // cout << *it << endl;
    print("*it", *it);
    print("*(it+1)", *(it+1));
    *it = 'h';
    print("str_ref", str_ref);
    print("str_res", str_res);
    it = str_res.begin();
    for (; it != str_res.end(); it++) {
        print(it);
    }
    cout << endl;

    // output: 
    // H
    // *it = 'H'
    // *(it+1) = 'e'
    // str_ref = "Hello World!"
    // str_res = "hello World!"
    // h e l l o   W o r l d ! 

#endif


/*
    3) iterator rbegin() 
    返回指向起始的逆向迭代器
*/
#if false

    string str_ref("Hello World!");
    print("str_ref", str_ref);
    string::reverse_iterator r_it = str_ref.rbegin();
    for (; r_it != str_ref.rend(); r_it++) {
        print(r_it);
    }
    cout << endl;
    // output: 
    // 2) iterator end()
    // str_ref = "Hello World!"
    // ! d l r o W   o l l e H 

#endif


    return 0;
}