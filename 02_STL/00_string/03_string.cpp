#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

int main()
{
    // 容量操作

    string str_ref_1 = "Hello World!";
    string str_ref_2 = "你好，世界！";
    string str_ref_3;

    system("chcp 65001");
    cout << boolalpha;
    
    // 1) empty() 检查 string 是否无字符
    print("1) bool empty()");
    print("str_ref_1", str_ref_1);
    cout << "str_ref_1.empty() = " << str_ref_1.empty() << endl;
    // output: 
    // 1) bool empty()
    // str_ref_1 = "Hello World!"
    // str_ref_1.empty() = false


    // 2) size() / length() 返回 string 中的 CharT 元素数
    print("2) size_type size() / size_type length()");
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("the size of str_ref_1", str_ref_1.size());
    print("the size of str_ref_2", str_ref_2.size());
    print("the size of str_ref_1", str_ref_1.length());
    print("the size of str_ref_2", str_ref_2.length());
    // output: 
    // 2) size_type size() / size_type length()
    // str_ref_1 = "Hello World!"
    // str_ref_2 = "你好，世界！"
    // the size of str_ref_1 = 12
    // the size of str_ref_2 = 18
    // the size of str_ref_1 = 12
    // the size of str_ref_2 = 18


    // 3) max_size() 返回 string 由于保有系统或库实现限制所能保有的最大元素数
    print("3) size_type max_size()");
    print("str_ref_1", str_ref_1);
    print("the max_size of str_ref_1", str_ref_1.max_size());
    // output: 
    // 3) size_type max_size()
    // str_ref_1 = "Hello World!"
    // the max_size of str_ref_1 = 4611686018427387903


    // 4) resize(size_type count) 重设字符串大小，使其包含 count 个字符
    // count 大于字符串大小，后续补 '\0'，否则缩减到前 count 个元素
    print("4) void resize(size_type count)");
    string str_res_4(str_ref_1);
    str_res_4.resize(3);
    print("str_ref_1", str_ref_1);
    print("str_res_4", str_res_4);
    // output:
    // 4) void resize(size_type count)
    // str_ref_1 = "Hello World!"
    // str_res_4 = "Hel"


    // 5) resize(size_type count, CharT ch) 重设字符串大小，使其包含 count 个字符
    // count 大于字符串大小，将后附的字符初始化为 ch，否则缩减到前 count 个元素
    print("5) void resize(size_type count, CharT ch)");
    string str_res_5(str_ref_1);
    str_res_5.resize(20, 'a'); 
    print("str_ref_1", str_ref_1);
    print("str_res_5", str_res_5);
    // output:
    // 5) void resize(size_type count, CharT ch)
    // str_ref_1 = "Hello World!"
    // str_res_5 = "Hello World!aaaaaaaa"


    // 6) capacity() 返回当前已为字符串分配空间的字符数
    print("6) size_type capacity()");
    print("str_ref_1", str_ref_1);
    print("the capacity of str_ref_1", str_ref_1.capacity());
    // output: 
    // 6) size_type capacity()
    // str_ref_1 = "Hello World!"
    // the capacity of str_ref_1 = 15


    // 7) reserve() 告知 std::basic_string 对象大小的有计划更改，使得它能准确地管理存储分配
    print("7) reserve( size_type new_cap )");
    string str_res_7(str_ref_1);
    print("str_ref_1", str_ref_1);
    print("str_res_7", str_res_7);
    str_res_7.reserve(100);
    print("the capacity of str_ref_1", str_ref_1.capacity());
    print("the capacity of str_res_1", str_res_7.capacity());
    // output:
    // 7) reserve( size_type new_cap )
    // str_ref_1 = "Hello World!"
    // str_res_7 = "Hello World!"
    // the capacity of str_ref_1 = 15
    // the capacity of str_res_1 = 100


    // 7) shrink_to_fit() 这是减少 capacity() 到 size() 的非强制请求
    print("8) void shrink_to_fit()");
    string str_res_8(str_ref_1);
    print("str_ref_1", str_ref_1);
    print("str_res_8", str_res_8);
    str_res_8.shrink_to_fit();
    print("the capacity of str_ref_1", str_ref_1.capacity());
    print("the capacity of str_res_8", str_res_8.capacity());
    // output: 
    // 8) void shrink_to_fit()
    // str_ref_1 = "Hello World!"
    // str_res_8 = "Hello World!"
    // the capacity of str_ref_1 = 100
    // the capacity of str_res_8 = 15

    return 0;
}