#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

// 字符串构造方法

int main()
{   
/*
    1) 无参构造
    string()
*/
#if false

    string str_res;
    print("str_res", str_res);

    // output:
    // str_res = ""

#endif


/*
    2) 重复字符构造
    string(size_type count, charT ch)
*/
#if false

    string str_res(11, 'a');
    print("ch_ref", 'a');
    print("str_res", str_res);

    // output: 
    // ch_ref = 'a'
    // str_res = "aaaaaaaaaaa"

#endif


/*
    3) 用等号初始化
    string = const *s
*/
#if false

    string str_res = "Hello World!";
    print("str_ref", "Hello World!");
    print("str_res", str_res);

    // output: 
    // str_ref = "Hello World!"
    // str_res = "Hello World!"

#endif


/*
    4) 用 char * 构造
    string(charT const* s)
*/
#if false

    string str_res("Hello World!");
    print("str_ref", "Hello World!");
    print("str_res", str_res);

    // output: 
    // str_ref = "Hello World!"
    // str_res = "Hello World!"

#endif


/*
    5) 拷贝构造
    string(string&)
*/
#if false

    string str_ref("Hello Word!");
    string str_res(str_ref);
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output: 
    // str_ref = "Hello World!"
    // str_res = "Hello World!"

#endif


/*
    6) 用指定范围的字符进行构造 -- 方法1
    string(const string& other, size_type pos, size_type count)
*/
#if false

    string str_ref = "Hello World!";
    string str_res(str_ref, 4, 3);
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output: 
    // str_ref = "Hello World!"
    // str_res = "o W"

#endif


/*
    7) 用指定范围的字符进行构造 -- 方法2
    string(const string& other, size_type pos)
*/
#if false

    string str_ref = "Hello World!";
    string str_res(str_ref, 4);
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output:
    // str_ref = "Hello World!"
    // str_res = "o World!"

#endif


/*
    8) 移动构造
    string(move(T&& t))
*/
#if false

    string str_ref = "Hello World!";
    string str_res(move(str_ref));
    print("str_ref", str_ref);
    print("str_res", str_res);

    // output: 
    // str_ref = ""
    // str_res = "Hello World!"

#endif


/*
    // 9) 字符串拼接
    string1 + string2 + ...
*/
#if true

    string str_ref_1 = "Hello World!";
    string str_ref_2 = "aaaaaaaaaa";

    string str_res = str_ref_1 + "__" + str_ref_2;
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("str_ref_3", "__");
    print("str_res", str_res);

    // output: 
    // str_ref_1 = "aaaaaaaaaaa"
    // str_ref_2 = "Hello World!"
    // str_ref_3 = "__"
    // str_res = "Hello World!__aaaaaaaaaaa"

#endif


    return 0;
} 

