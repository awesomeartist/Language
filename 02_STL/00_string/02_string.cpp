#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

int main() 
{
    // 元素访问

    string str_ref = "Hello Word!";
    
    // 1) []，对访问的边界不做检查
    print("1) CharT& operator[]( size_type pos )");
    string str_res_1(str_ref);
    str_res_1[1] = 'E';
    // str2[20] = 'E';
    print("str_ref[1]", str_ref[1]);
    print("str_res_1[1]", str_res_1[1]);
    print("str_ref", str_ref);
    print("str_res_1", str_res_1);
    // output: 
    // str_ref[1] = 'e'
    // str_res_1[1] = 'E'
    // str_ref = "Hello Word!"
    // str_res_1 = "HEllo Word!"    
    

    // 2) at()，对访问边界有检查，以字节为单位
    print("2) CharT& at()");
    string str_res_2(str_ref);
    str_res_2.at(6) = 'w';
    print("str_ref.at(6)", str_ref.at(6));
    print("str_res_2.at(6)", str_res_2.at(6));
    print("str_ref", str_ref);
    print("str_res_2", str_res_2);
    // output: 
    // 2) CharT& at()
    // str_ref.at(6) = 'W'
    // str_res_2.at(6) = 'w'
    // str_ref = "Hello Word!"
    // str_res_2 = "Hello word!"


    // 3) front()
    print("3) CharT& front()");
    string str_res_3(str_ref);
    str_res_3.front() = 'h';
    print("str_ref.front()", str_ref.front());
    print("str_res_3.front()", str_res_3.front());
    print("str_ref", str_ref);
    print("str_res_3", str_res_3);
    // output: 
    // 3) CharT& front()
    // str_ref.front() = 'H'
    // str_res_3.front() = 'h'
    // str_ref = "Hello Word!"
    // str_res_3 = "hello Word!"


    // 4) back()
    print("4) CharT& back()");
    string str_res_4(str_ref);
    str_res_4.back() = '.';
    print("str_ref.back()", str_ref.back());
    print("str_res_4.back()", str_res_4.back());
    print("str_ref", str_ref);
    print("str_res_4", str_res_4);
    // output: 
    // 4) CharT& back()
    // str_ref.back() = '!'
    // str_res_4.back() = '.'
    // str_ref = "Hello Word!"
    // str_res_4 = "Hello Word."


    // 5) c_str()
    print("5) CharT* c_str()");
    print("str_ref", str_ref);
    print("str_ref.c_str()", str_ref.c_str());
    // output:
    // 5) CharT* c_str()
    // str_ref = "Hello Word!"
    // str_ref.c_str() = "Hello Word!"


    // 6、data()
    print("6) CharT* data()");
    print("str_ref", str_ref);
    print("str_ref.data()", str_ref.data());
    // output:
    // 6) CharT* data()
    // str_ref = "Hello Word!"
    // str_ref.data() = "Hello Word!"


    return 0;
}