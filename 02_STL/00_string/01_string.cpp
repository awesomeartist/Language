#include <iostream>
#include <string>
#include "00_string.hpp"

using namespace std;

int main()
{   // 字符串构造方法

    // 1) 无参构造
    print("1) string()");
    string str_res_1;
    print("str_res_1", str_res_1);
    // output:
    // 1) string() 
    // str_res_1 = ""


    // 2) 重复字符构造
    print("2) string(size_type count, charT ch)");
    string str_res_2(11, 'a');
    print("ch_ref", 'a');
    print("str_res_2", str_res_2);
    // output: 
    // 2) string(size_type count, charT ch)
    // ch_ref = 'a'
    // str_res_2 = "aaaaaaaaaaa"


    // 3) 用等号初始化
    print("3) string = const *s");
    string str_res_3 = "Hello World!";
    print("str_ref", "Hello World!");
    print("str_res", str_res_3);
    // output: 
    // 3) string = const *s
    // str_ref = "Hello World!"
    // str_res_3 = "Hello World!"


    // 4) 用 char * 构造
    print("4) string(charT const* s)");
    string str_res_4("Hello World!");
    print("str_ref", "Hello World!");
    print("str_res_4", str_res_4);
    // output: 
    // 4) string(charT const* s)
    // str_ref = "Hello World!"
    // str_res_4 = "Hello World!"


    // 5) 拷贝构造
    print("5) string(string&)");
    string str_ref("Hello Word!");
    string str_res_5(str_ref);
    print("str_ref", str_ref);
    print("str_res_5", str_res_5);
    // output: 
    // 5) string(string&)
    // str_ref = "Hello World!"
    // str_res_5 = "Hello World!"    


    // 6) 用指定范围的字符进行构造 -- 方法1
    print("6) string(const string& other, size_type pos, size_type count) ");
    string str_res_6(str_ref, 4, 3);
    print("str_ref", str_ref);
    print("str_res_6", str_res_6);
    // output: 
    // 6) string(const string& other, size_type pos, size_type count)
    // str_ref = "Hello World!"
    // str_res_6 = "o W"


    // 7) 用指定范围的字符进行构造 -- 方法2
    print("7) string(const string& other, size_type pos)");
    string str_res_7(str_ref, 4);
    print("str_ref", str_ref);
    print("str_res_7", str_res_7);
    // output:
    // 7) string(const string& other, size_type pos)
    // str_ref = "Hello World!"
    // str_res_7 = "o World!"


    // 8) 移动构造
    print("8) string(move(T&& t))");    // 右值引用
    string str_res_8(move(str_ref));
    print("str_ref", str_ref);
    print("str_res_8", str_res_8);
    // output: 
    // 8) string(move(T&& t))
    // str_ref = ""
    // str_res_8 = "Hello World!"


    // 9) 字符串拼接
    print("9) string1 + string2 + ...");
    string str_res_9 = str_res_2 + "__" + str_res_8;
    print("str_ref_1", str_res_2);
    print("str_ref_2", "__");
    print("str_ref_3", str_res_8);
    print("str_res_9", str_res_9);
    // output: 
    // 9) string1 + string2 + ...
    // str_ref_1 = "aaaaaaaaaaa"
    // str_ref_2 = "__"
    // str_ref_3 = "Hello World!"
    // str_res_9 = "aaaaaaaaaaa__Hello World!"

    return 0;
} 

