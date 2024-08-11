#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

int main()
{
    // 容量操作


    system("chcp 65001");
    cout << boolalpha;


/*
    1) bool empty() 
    检查 string 对象是否是空字符串

*/ 
#if false

    string str_ref = "Hello World!";
    print("str_ref", str_ref);
    print("str_ref.empty()", str_ref.empty());
    // cout << "str_ref.empty() = " << str_ref.empty() << endl;

    // output: 
    // str_ref = "Hello World!"
    // str_ref.empty() = false

#endif


/*
    2) size_type size() / size_type length() 
    返回 string 中的 ChatT 元素数量
*/
#if false

    string str_ref_1("Hello World!");
    string str_ref_2("你好，世界！");
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("the size of str_ref_1", str_ref_1.size());
    print("the size of str_ref_2", str_ref_2.size());
    print("the size of str_ref_1", str_ref_1.length());
    print("the size of str_ref_2", str_ref_2.length());

    // output: 
    // str_ref_1 = "Hello World!"
    // str_ref_2 = "你好，世界！"
    // the size of str_ref_1 = 12
    // the size of str_ref_2 = 18
    // the size of str_ref_1 = 12
    // the size of str_ref_2 = 18

#endif


/*
    3) size_type max_size() 
    返回 string 由于保有系统或库实现限制所能保有的最大元素数
*/
#if false

    string str_ref("Hello World!");
    print("str_ref", str_ref);
    print("the max_size of str_ref", str_ref.max_size());
    
    // output: 
    // str_ref = "Hello World!"
    // the max_size of str_ref = 4611686018427387903

#endif


/*
    4) void resize(size_type count)
    重设字符串大小，使其包含 count 个字符
    count 大于字符串大小，后续补 '\0'，否则缩减到前 count 个元素
*/
#if false

    string str_ref("Hello World!");
    string str_res(str_ref);
    str_res.resize(3);
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output:
    // str_ref = "Hello World!"
    // str_res = "Hel"

#endif


/*
    5) void resize(size_type count, CharT ch) 
    重设字符串大小，使其包含 count 个字符
    count 大于字符串大小，将后附的字符初始化为 ch，否则缩减到前 count 个元素
*/
#if false

    string str_ref("Hello World!");
    string str_res(str_ref);
    str_res.resize(20, 'a'); 
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output:
    // str_ref = "Hello World!"
    // str_res = "Hello World!aaaaaaaa"

#endif


/*
    6) size_type capacity() 
    返回当前已为字符串分配空间的字符数
*/
#if false

    string str_ref("Hello World!");
    print("str_ref", str_ref);
    print("the capacity of str_ref", str_ref.capacity());

    // output: 
    // str_ref = "Hello World!"
    // the capacity of str_ref = 15

#endif


/*
    6) void resize( size_type count )
    重设字符串大小，使其包含 count 个字符
*/
#if false

    string str_ref("Hello World!");
    string str_res(str_ref);
    print("str_ref", str_ref);
    print("str_res", str_res);
    str_res.reserve(100);
    print("the capacity of str_ref", str_ref.capacity());
    print("the capacity of str_res", str_res.capacity());

    // output:
    // str_ref = "Hello World!"
    // str_res = "Hello World!"
    // the capacity of str_ref = 15
    // the capacity of str_res = 100

#endif


/*
    7) void shrink_to_fit() 
    这是减少 capacity() 到 size() 的非强制请求
*/
#if true

    string str_ref = "Hello World!";
    str_ref.reserve(100);
    string str_res(str_ref);
    print("str_ref", str_ref);
    print("str_res", str_res);
    str_res.shrink_to_fit();
    print("the capacity of str_ref", str_ref.capacity());
    print("the capacity of str_res", str_res.capacity());

    // output: 
    // str_ref = "Hello World!"
    // str_res = "Hello World!"
    // the capacity of str_ref = 100
    // the capacity of str_res = 15

#endif

    return 0;
}