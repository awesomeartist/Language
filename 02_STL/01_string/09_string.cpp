#include <iostream>
#include <string>
#include <stdint.h>
#include <typeinfo>
#include "00_string.hpp"

using namespace std;

int main()
{
    // 其他字符串相关操作
    
    
    // 1) std::string to_string( int value )
#if false

    uint64_t num_ref = 2333114514;
    print("num_ref", num_ref);
    print("num_ref to string", to_string(num_ref));

    // output:
    // num_ref = 2333114514
    // num_ref to string = "2333114514"

#endif

/*
    2) int stoi ( const std::string& str, std::size_t* pos = nullptr, int base = 10 );
    字符串转整型
    pos 记录不能完成转换的第一个字符位置
    base 目标整型的进制
*/
#if false

    string str_ref = "128cd25";
    print("str_ref", str_ref);
    size_t pos;
    print("str_ref to int", stoi(str_ref, &pos, 8));
    print("the pos of first ch in str_ref not transferred", pos);
    // print("typeid of stoi(str_ref)", typeid(stoi(str_ref)).name());
    cout << "typeid of stoi(str_ref) :" << typeid(stoi(str_ref)).name() << endl;

    // output:
    // str_ref = "128cd25"
    // str_ref to int = 10
    // the pos of first ch in str_ref not transferred = 2
    // typeid of stoi(str_ref) :i   

#endif


    // 3) float stof ( const std::string& str, std::size_t* pos = nullptr );
#if false

    string str_ref = "123.456f";
    print("str_ref", str_ref);
    size_t pos;
    print("str_ref to float", stof(str_ref, &pos));
    print("the pos of first ch in str_ref not transferred", pos);
    cout << "typeid of stof(str_ref) :" << typeid(stof(str_ref)).name() << endl;
    
    // output:
    // str_ref = "123.456f"
    // str_ref to float = 10
    // the pos of first ch in str_ref not transferred = 7
    // typeid of stof(str_ref_1) :f

#endif


    // 3) struct hash<std::basic_string<char, std::char_traits<char>, A>>
#if true

    string str_ref_1 = "128cd25";
    string str_ref_2 = "123.456f"; 
    print("str_ref_1", str_ref_1);
    print("str_ref_2", str_ref_2);
    print("hash value of str_ref_1", hash<std::string_view>{}(str_ref_1));
    hash<string> hs;
    print("hash value of str_ref_2", hs(str_ref_2));

    // output:
    // str_ref_1 = "128cd25"
    // str_ref_2 = "123.456f"
    // hash value of str_ref_1 = 14167585079038610828
    // hash value of str_ref_2 = 10637078999152795202

#endif


    return 0;
}