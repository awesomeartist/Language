#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;


int main()
{
    // 迭代器：为容器类提供统一的遍历接口，不用管容器底层内存管理方式
    
    string str_ref = "Hello World!";

    // 数组访问，可以访问与修改
    for (auto &c : str_ref) {
        cout << c << " ";
    }
    cout << endl;
    // output: 
    // H e l l o   W o r l d ! 


    // 1) begin() 返回指向起始的迭代器
    print("1) iterator begin()");
    string str_res_1(str_ref);
    string::iterator it = str_res_1.begin();
    // cout << *it << endl;
    print("*it", *it);
    print("*(it+1)", *(it+1));
    *it = 'h';
    print("str_ref", str_ref);
    print("str_res_1", str_res_1);
    it = str_res_1.begin();
    for (; it != str_res_1.end(); it++) {
        print(it);
    }
    cout << endl;
    // output: 
    // 1) iterator begin()
    // H
    // *it = 'H'
    // *(it+1) = 'e'
    // str_ref = "Hello World!"
    // str_res_1 = "hello World!"
    // h e l l o   W o r l d ! 


    // 2) rbegin() 返回指向起始的逆向迭代器
    print("2) iterator rbegin()");
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

    return 0;
}