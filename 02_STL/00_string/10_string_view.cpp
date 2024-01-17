#include <iostream>
#include <string>
#include <string_view>
#include "00_string.hpp"

using namespace std;

void fun1(string str) {
    print("str.data() in fun1", (uintptr_t)str.data());
}

void fun2(string_view str) {
    print("str.data() in fun2", (uintptr_t)str.data());
}

int main()
{   
    system("chcp 65001");

    const char *str_ref = "你好，世界！";


    // 1) basic_string
    print("1) basic_string");
    string str_res_1 = str_ref;
    string str_res_2(str_ref);
    print("str_ref", (string)str_ref);
    print("str_res_1", str_res_1);
    print("str_res_2", str_res_2);
    print("the address of str_ref", (uintptr_t)str_ref);
    fun1(str_ref);
    print("the address of str_res_1", (uintptr_t)str_res_1.data());
    print("the address of str_res_2", (uintptr_t)str_res_2.data());
    // output:
    // 1) basic_string
    // str_ref = "你好，世界！"
    // str_res_1 = "你好，世界！"
    // str_res_2 = "你好，世界！"
    // the address of str_ref = 140702284410945
    // str.data() in fun1 = 2974756987472
    // the address of str_res_1 = 2974756987408
    // the address of str_res_2 = 2974756987440


    // 2) string_view
    print("2) string_view");
    string_view str_res_3 = str_ref;
    string_view str_res_4(str_ref);
    print("str_ref", (string)str_ref);
    print("str_res_3", str_res_3);
    print("str_res_4", str_res_4);
    print("the address of str_ref", (uintptr_t)str_ref);
    fun2(str_ref);
    print("the address of str_res_3", (uintptr_t)str_res_3.data());
    print("the address of str_res_4", (uintptr_t)str_res_4.data());
    // output:
    // 2) string_view
    // str_ref = "你好，世界！"
    // str_res_3 = "你好，世界！"
    // str_res_4 = "你好，世界！"
    // the address of str_ref = 140702284410945
    // str.data() in fun2 = 140702284410945
    // the address of str_res_3 = 140702284410945
    // the address of str_res_4 = 140702284410945


    // 3) constexpr void remove_prefix(size_type n)
    print("3) remove_prefix(size_type n)");
    string_view str_res_5(str_ref);
    str_res_5.remove_prefix(3);
    print("str_ref", (string)str_ref);
    print("str_res_5", str_res_5);
    print("the address of str_ref", (uintptr_t)str_ref);
    print("the address of str_res_5", (uintptr_t)str_res_5.data());
    // output:
    // 3) remove_prefix(size_type n)
    // str_ref = "你好，世界！"
    // str_res_5 = "好，世界！"
    // the address of str_ref = 140702284410945
    // the address of str_res_5 = 140702284410948


    // 4) constexpr void remove_suffix(size_type n)
    print("4) remove_suffix(size_type n)");
    string_view str_res_6(str_ref);
    str_res_6.remove_suffix(str_res_6.size()-9);
    print("str_ref", (string)str_ref);
    print("str_res_6", str_res_6);
    print("the address of str_ref", (uintptr_t)str_ref);
    print("the address of str_res_6", (uintptr_t)str_res_6.data());
    // output:
    // 4) remove_suffix(size_type n)
    // str_ref = "你好，世界！"
    // str_res_6 = "你好，"
    // the address of str_ref = 140702284410945
    // the address of str_res_6 = 140702284410945
    
    return 0;
}
